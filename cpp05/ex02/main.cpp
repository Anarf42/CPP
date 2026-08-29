/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 18:49:18 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/08/20 14:33:27 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main(void)
{
	std::srand(static_cast<unsigned int>(std::time(NULL)));
	
	std::cout << "\n----- Execute unsigned form -----" << std::endl;
	{
		Bureaucrat boss("Boss", 1);
		PresidentialPardonForm pardon("Arthur Dent");

		boss.executeForm(pardon);
	}

	std::cout << "\n----- Insufficient grade to sign -----" << std::endl;
	{
		Bureaucrat intern("Intern", 150);
		ShrubberyCreationForm shrubbery("garden");

		intern.signForm(shrubbery);
		intern.executeForm(shrubbery);
	}

	std::cout << "\n----- Insufficient grade to execute -----" << std::endl;
	{
		Bureaucrat signer("Signer", 25);
		Bureaucrat executor("Executor", 6);
		PresidentialPardonForm pardon("Ford Prefect");

		signer.signForm(pardon);
		executor.executeForm(pardon);
	}

	std::cout << "\n----- Shrubbery creation -----" << std::endl;
	{
		Bureaucrat gardener("Gardener", 1);
		ShrubberyCreationForm shrubbery("garden");

		std::cout << shrubbery << std::endl;
		gardener.signForm(shrubbery);
		gardener.executeForm(shrubbery);
	}

	std::cout << "\n----- Robotomy request -----" << std::endl;
	{
		Bureaucrat surgeon("Surgeon", 1);
		RobotomyRequestForm robotomy("Bender");

		surgeon.signForm(robotomy);
		for (int i = 0; i < 4; ++i)
			surgeon.executeForm(robotomy);
	}

	std::cout << "\n----- Presidential pardon -----" << std::endl;
	{
		Bureaucrat president("President", 1);
		PresidentialPardonForm pardon("Marvin");

		std::cout << pardon << std::endl;
		president.signForm(pardon);
		president.executeForm(pardon);
		std::cout << pardon << std::endl;
	}

	return (0);
}
