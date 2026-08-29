/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 18:13:19 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/08/19 20:36:28 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("Default")
{
	std::cout << "Default constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) :  AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : AForm(copy), _target(copy._target)
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy)
{
	if (this != &copy)
	{
		AForm::operator=(copy);
		_target = copy._target;
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Destructor" << std::endl;
}

const char* ShrubberyCreationForm::FileCreationException::what() const throw()
{
    return ("Could not create shrubbery file");
}

void	ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	if (!getSigned())
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > getGradeToExecute())
		throw AForm::GradeTooLowException();
	std::ofstream file((_target + "_shrubbery").c_str());
	if (!file.is_open())
	{
		throw ShrubberyCreationForm::FileCreationException();
	}
	file << "       /\\       " << std::endl;
	file << "      /**\\      " << std::endl;
	file << "     /****\\     " << std::endl;
	file << "    /******\\    " << std::endl;
	file << "       ||       " << std::endl;
}