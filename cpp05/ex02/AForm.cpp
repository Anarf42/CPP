/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 14:52:38 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/09/13 18:43:31 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : _Name("Default"), _GradeToSign(150), _GradeToExecute(150), _Signed(false)
{
	std::cout << "Default constructor" << std::endl;
}

AForm::AForm(std::string const& name, int GradeToSign, int GradeToExecute) : _Name(name), _GradeToSign(GradeToSign), _GradeToExecute(GradeToExecute), _Signed(false)
{
	if (_GradeToSign < 1 || _GradeToExecute < 1)
		throw AForm::GradeTooHighException();
	if (_GradeToSign > 150 || _GradeToExecute > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(AForm const& copy) : _Name(copy._Name), _GradeToSign(copy._GradeToSign), _GradeToExecute(copy._GradeToExecute), _Signed(copy._Signed)
{
	
}

AForm& AForm::operator=(AForm const& copy)
{
	if (this != &copy)
		_Signed = copy._Signed;
	return (*this);	
}

AForm::~AForm()
{

}

std::string const&	AForm::getNameForm(void) const
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

std::ostream& operator<<(std::ostream& os, AForm const& form)
{
	os	<< form.getNameForm() 
		<< ", signed: " << form.getSigned()
		<< ", grade required to sign: " << form.getGradeToSign()
		<< ", grade required to execute: " << form.getGradeToExecute();
	return os;
}

char const* AForm::GradeTooHighException::what() const throw()
{
	return "Grade too high!";
}

char const* AForm::GradeTooLowException::what() const throw()
{
		return "Grade too low!";
}

char const* AForm::FormNotSignedException::what() const throw()
{
		return "Form not signed.";		
}
void	AForm::beSigned(Bureaucrat const& bureaucrat)
{
	if (bureaucrat.getGrade() > _GradeToSign)
		throw AForm::GradeTooLowException();
	_Signed = true;
}
		