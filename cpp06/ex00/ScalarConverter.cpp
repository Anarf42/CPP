/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 19:52:19 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/08/27 10:10:27 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <cstdlib>
#include <cctype>

ScalarConverter::ScalarConverter()
{
	std::cout << "Default constructor" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter& copy)
{
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& copy)
{
	return (*this);
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "Destructor" << std::endl;
}

void	ScalarConverter::converter(const std::string str)
{
}