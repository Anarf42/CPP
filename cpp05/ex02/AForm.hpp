/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 14:52:49 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/09/13 18:39:23 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <string>
#include <exception>
#include <iostream>

class Bureaucrat;
class AForm {
	private:
		std::string const	_Name;
		int const			_GradeToSign;
		int	const			_GradeToExecute;
		bool				_Signed;
	public:
		AForm();	//Default constructor
		AForm(std::string const& name, int GradeToSign, int GradeToExecute);
		AForm(AForm const& copy); //copy constructor
    	AForm& operator=(AForm const& copy); // assignament
		virtual ~AForm();	//destructor
	
		std::string const&		getNameForm() const;
		int						getGradeToSign() const;
		int						getGradeToExecute() const;
		bool					getSigned() const;

		void					beSigned(Bureaucrat const& bureaucrat);
		virtual	void			execute(Bureaucrat const& executor) const = 0;
		class GradeTooHighException : public std::exception
		{
			public:
				char const* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				char const* what() const throw();
		};
		class FormNotSignedException : public std::exception
		{
			public:
				char const* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& os, AForm const& form);

#endif