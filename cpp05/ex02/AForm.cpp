/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 14:52:38 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/08/19 20:09:53 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : _Name("Default"), _GradeToSign(150), _GradeToExecute(150), _Signed(false)
{
	std::cout << "Default constructor" << std::endl;
}

AForm::AForm(const std::string& name, int GradeToSign, int GradeToExecute) : _Name(name), _GradeToSign(GradeToSign), _GradeToExecute(GradeToExecute), _Signed(false)
{
	if (_GradeToSign < 1 || _GradeToExecute < 1)
		throw AForm::GradeTooHighException();
	if (_GradeToSign > 150 || _GradeToExecute > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm& copy) : _Name(copy._Name), _GradeToSign(copy._GradeToSign), _GradeToExecute(copy._GradeToExecute), _Signed(copy._Signed)
{
	
}

AForm& AForm::operator=(const AForm& copy)
{
	if (this != &copy)
		_Signed = copy._Signed;
	return (*this);	
}

AForm::~AForm()
{

}

const	std::string&	AForm::getNameForm(void) const
{
	return(_Name);
}

int	AForm::getGradeToSign(void) const
{
	return(_GradeToSign);
}

int	AForm::getGradeToExecute(void) const
{
	return(_GradeToExecute);
}

bool	AForm::getSigned(void) const
{
	return(_Signed);
}

std::ostream& operator<<(std::ostream& os, const AForm& form)
{
	os	<< form.getNameForm() 
		<< ", signed: " << form.getSigned()
		<< ", grade required to sign: " << form.getGradeToSign()
		<< ", grade required to execute: " << form.getGradeToExecute();
	return os;
}

const	char* AForm::GradeTooHighException::what() const throw()
{
	return "Grade too high!";
}

const	char* AForm::GradeTooLowException::what() const throw()
{
		return "Grade too low!";
}

const	char* AForm::FormNotSignedException::what() const throw()
{
		return "Form not signed.";		
}
void	AForm::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > _GradeToSign)
		throw AForm::GradeTooLowException();
	_Signed = true;
}
		