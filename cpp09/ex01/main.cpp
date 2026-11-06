/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 14:44:56 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/11/06 16:49:17 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

#include <sstream>
#include <iostream>
#include <exception>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Error" << std::endl;
		return 1;
	}
	try
	{
		RPN rpn;
		rpn.calculate(argv[1]);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return 1;
	}
	return 0;
}