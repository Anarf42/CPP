/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 14:09:20 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/09/17 19:24:22 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>

Span::Span() :  _maxSize(0)
{
	std::cout << "Default constructor" << std::endl;
}

Span::Span(unsigned int n) : _maxSize(n)
{
}

Span::Span(Span const& copy) : _maxSize(copy._maxSize), _numbers(copy._numbers)
{	
}

Span& Span::operator=(Span const& copy)
{
	if (this != &copy)
	{
		_maxSize = copy._maxSize;
		_numbers = copy._numbers;
	}
		return (*this);	
}

Span::~Span() {}

void	Span::addNumber(int number)
{
	if (_numbers.size() >= _maxSize)
		throw std::runtime_error("Span is full");
	_numbers.push_back(number);
}

unsigned int Span::shortestSpan() const
{
	if (_numbers.size() < 2)
		throw std::runtime_error("Not enough numbers");
	std::vector<int> sorted = _numbers;
	std::sort(sorted.begin(), sorted.end());
	unsigned int shortest = static_cast<unsigned int>(static_cast<long>(sorted[1] - static_cast<long>(sorted[0])));
	for (std::size_t i = 2; i < sorted.size(); i++)
	{
		unsigned int current = static_cast<unsigned int>(static_cast<long>(sorted[i] - static_cast<long>(sorted[i - 1])));
		if (current < shortest)
			shortest = current;
	}
	return (shortest);
}

unsigned int Span::longestSpan() const
{
	if (_numbers.size() < 2)
		throw std::runtime_error("Not enough numbers");
	std::vector<int>::const_iterator min;
	std::vector<int>::const_iterator max;

	min = std::min_element(_numbers.begin(), _numbers.end());
	max = std::max_element(_numbers.begin(), _numbers.end());
	return (static_cast<unsigned int>(static_cast<long>(*max) - static_cast<long>(*min)));	
}
