/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 14:55:40 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/11/06 17:08:53 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <sstream>
#include <stdexcept>
#include <iostream>
#include <climits>

RPN::RPN()
{}

RPN::RPN(const RPN& other) 
{
	*this = other;
}

RPN& RPN::operator=(const RPN& other) 
{
	if (this != &other)
		_stack = other._stack;
	return *this;
}

RPN::~RPN() 
{}

int RPN::safeOperation(int a, int b, char op)
{
    if (op == '+')
    {
        if ((b > 0 && a > INT_MAX - b) ||
            (b < 0 && a < INT_MIN - b))
            throw std::runtime_error("Error: overflow");
        return a + b;
    }
    else if (op == '-')
    {
        if ((b < 0 && a > INT_MAX + b) ||
            (b > 0 && a < INT_MIN + b))
            throw std::runtime_error("Error: overflow");
        return a - b;
    }
    else if (op == '*')
    {
        if (a > 0 && b > 0 && a > INT_MAX / b)
            throw std::runtime_error("Error: overflow");
        if (a > 0 && b < 0 && b < INT_MIN / a)
            throw std::runtime_error("Error: overflow");
        if (a < 0 && b > 0 && a < INT_MIN / b)
            throw std::runtime_error("Error: overflow");
        if (a < 0 && b < 0 && a < INT_MAX / b)
            throw std::runtime_error("Error: overflow");
        return a * b;
    }
    else if (op == '/')
    {
        if (b == 0)
            throw std::runtime_error("Error: division by zero");
        if (a == INT_MIN && b == -1)
            throw std::runtime_error("Error: overflow");
        return a / b;
    }
    throw std::runtime_error("Error: invalid operator");
}


void	RPN::calculate(const std::string& expr) 
{
	std::istringstream iss (expr);
	std::string token;

	while (!_stack.empty())
	{
		_stack.pop();
	}
	

	while (iss >> token)
	{
		if (token.length() == 1 && token[0] >= '0' && token[0] <= '9')
		{
			int number = token[0] - '0';
			_stack.push(number);
		}
		else if (token.length() == 1 &&
				(token[0] == '+' || token[0] == '-' ||
				token[0] == '*' || token[0] == '/'))
		{
			if (_stack.size() < 2)
				throw std::runtime_error("Error 1");
			int b = _stack.top();
			_stack.pop();
			int a = _stack.top();
			_stack.pop();
			int result = safeOperation(a, b, token[0]);
			_stack.push(result);
		}
		else
			throw std::runtime_error("Error 3");
	}
	if (_stack.size() != 1)
		throw std::runtime_error("Error 4");
	std::cout << _stack.top() << std::endl;
}