/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 18:49:15 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/08/19 20:29:07 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() :  _Name("Default"), _Grade(3)
{
	std::cout << "Default constructor" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _Name(name), _Grade(grade)
{
	if (_Grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (_Grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : _Name(copy._Name), _Grade(copy._Grade)
{
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copy)
{
	if (this != &copy)
		_Grade = copy._Grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor" << std::endl;
}

const	std::string&	Bureaucrat::getName() const
{
	return (_Name);
}

int	Bureaucrat::getGrade() const
{
	return (_Grade);
}

void	Bureaucrat::incrementGrade(void)
{
	if (_Grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	_Grade--;
}

void	Bureaucrat::decrementGrade(void)
{
	if (_Grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	_Grade++;
}

const	char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high!";	
}

const	char* Bureaucrat::GradeTooLowException::what() const throw()
{
		return "Grade too low!";
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << "." << std::endl;
	return os;
}

void	Bureaucrat::signForm(AForm& form)
{
    try
    {
		form.beSigned(*this);
		std::cout << _Name << " signed " << form.getNameForm() << std::endl;
    }
	catch (const std::exception& e)
	{
		std::cout << _Name << " couldn't sign " << form.getNameForm() << " because " << e.what() << std::endl;
    }
}

void	Bureaucrat::executeForm(const AForm& form) const
{
	try
	{
		form.execute(*this);
		std::cout << _Name << " executed " << form.getNameForm() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}