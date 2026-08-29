/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 11:37:52 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/08/20 14:25:39 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

Intern::Intern()
{
}

Intern::Intern(const Intern&)
{
}
Intern& Intern::operator=(const Intern&)
{
	return *this;
}

Intern::~Intern()
{
}

AForm*	Intern::makeForm(const std::string formName, std::string target)
{
	std::string formList[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int	i;

	for (i = 0; i < 3; i++)
	{
		if (formName == formList[i])
			break;
	}
	switch (i)
	{
	case 0:
		std::cout << "Intern creates " << formName << std::endl;
		return new ShrubberyCreationForm(target);
	case 1:
		std::cout << "Intern creates " << formName << std::endl;
		return new RobotomyRequestForm(target);
	case 2:
		std::cout << "Intern creates " << formName << std::endl;
		return new PresidentialPardonForm(target);
	default:
		std::cout << "Intern couldn't create " << formName << std::endl;
		return NULL;
	}

}