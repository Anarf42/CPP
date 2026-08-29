/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 14:52:38 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/08/14 13:53:50 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _Name("Default"), _GradeToSign(150), _GradeToExecute(150), _Signed(false)
{
	std::cout << "Default constructor" << std::endl;
}

Form::Form(const std::string& name, int GradeToSign, int GradeToExecute) : _Name(name), _GradeToSign(GradeToSign), _GradeToExecute(GradeToExecute), _Signed(false)
{
	if (_GradeToSign < 1 || _GradeToExecute < 1)
		throw Form::GradeTooHighException();
	if (_GradeToSign > 150 || _GradeToExecute > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form& copy) : _Name(copy._Name), _GradeToSign(copy._GradeToSign), _GradeToExecute(copy._GradeToExecute), _Signed(copy._Signed)
{
	
}

Form& Form::operator=(const Form& copy)
{
	if (this != &copy)
		_Signed = copy._Signed;
	return (*this);	
}

Form::~Form()
{

}

const	std::string&	Form::getNameForm(void) const
{
	return(_Name);
}

int	Form::getGradeToSign(void) const
{
	return(_GradeToSign);
}

int	Form::getGradeToExecute(void) const
{
	return(_GradeToExecute);
}

bool	Form::getSigned(void) const
{
	return(_Signed);
}

std::ostream& operator<<(std::ostream& os, const Form& form)
{
	os	<< form.getNameForm() 
		<< ", signed: " << form.getSigned()
		<< ", grade required to sign: " << form.getGradeToSign()
		<< ", grade required to execute: " << form.getGradeToExecute();
	return os;
}

const	char* Form::GradeTooHighException::what() const throw()
{
	return "Grade too high!";
}

const	char* Form::GradeTooLowException::what() const throw()
{
		return "Grade too low!";
}

void	Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > _GradeToSign)
		throw Form::GradeTooLowException();
	_Signed = true;
}
		