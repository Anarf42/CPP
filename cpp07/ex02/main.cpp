/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 17:12:59 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/09/09 00:24:45 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <string>

int	main()
{
	Array<int> numbers(5);

	for (unsigned int i = 0; i < numbers.size(); i++)
		numbers[i] = i * 10;

	std::cout << "Original:" << std::endl;
	for (unsigned int i = 0; i < numbers.size(); i++)
		std::cout << numbers[i] << " ";
	std::cout << std::endl;

	Array<int> copy(numbers);

	copy[0] = 999;

	std::cout << "Original[0]: " << numbers[0] << std::endl;
	std::cout << "Copy[0]: " << copy[0] << std::endl;

	Array<std::string> words(3);

	words[0] = "hola";
	words[1] = "cpp";
	words[2] = "templates";

	for (unsigned int i = 0; i < words.size(); i++)
		std::cout << words[i] << std::endl;

	try
	{
		std::cout << numbers[100] << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "Index out of bounds" << std::endl;
	}

	return (0);
}