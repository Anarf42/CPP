/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 18:49:18 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/07/20 22:31:53 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main(void)
{
	std::cout << "----- Valid bureaucrat -----" << std::endl;
	try
	{
		Bureaucrat bob("Bob", 42);

		std::cout << bob << std::endl;

		bob.incrementGrade();
		std::cout << "After increment: " << bob << std::endl;

		bob.decrementGrade();
		std::cout << "After decrement: " << bob << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "----- Grade too high on construction -----" << std::endl;
	try
	{
		Bureaucrat alice("Alice", 0);
		std::cout << alice << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "----- Grade too low on construction -----" << std::endl;
	try
	{
		Bureaucrat john("John", 151);
		std::cout << john << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "----- Increment limit -----" << std::endl;
	try
	{
		Bureaucrat boss("Boss", 1);

		std::cout << boss << std::endl;
		boss.incrementGrade();
		std::cout << boss << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "----- Decrement limit -----" << std::endl;
	try
	{
		Bureaucrat intern("Intern", 150);

		std::cout << intern << std::endl;
		intern.decrementGrade();
		std::cout << intern << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	return (0);
}