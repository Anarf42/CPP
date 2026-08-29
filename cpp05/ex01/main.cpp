/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 18:49:18 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/08/19 20:09:10 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main(void)
{
	std::cout << "\n----- Valid form -----" << std::endl;
	try
	{
		Form form("Contract", 50, 25);
		std::cout << form << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n----- Form grade too high -----" << std::endl;
    try
	{
        Form invalidForm("Invalid", 0, 25);
		std::cout << invalidForm << std::endl;
    }
    catch (const std::exception& e)
    {
    	std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n----- Form grade too low -----" << std::endl;
    try
    {
		Form invalidForm("Invalid", 50, 151);
		std::cout << invalidForm << std::endl;
    }
    catch (const std::exception& e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
    }
	std::cout << "\n----- Successful signature -----" << std::endl;
	try
	{
		Bureaucrat boss("Boss", 25);
        Form contract("Contract", 50, 25);
        std::cout << "Before: " << contract << std::endl;
        boss.signForm(contract);
        std::cout << "After:  " << contract << std::endl;
    }
	catch (const std::exception& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    std::cout << "\n----- Failed signature -----" << std::endl;
    try
    {
        Bureaucrat intern("Intern", 100);
        Form contract("Contract", 50, 25);
        std::cout << "Before: " << contract << std::endl;
        intern.signForm(contract);
        std::cout << "After:  " << contract << std::endl;
    }
    catch (const std::exception& e)
    {
		std::cout << "Exception: " << e.what() << std::endl;
        }
	return (0);
}