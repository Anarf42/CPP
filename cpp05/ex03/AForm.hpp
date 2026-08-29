/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 14:52:49 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/08/19 19:52:57 by anruiz-d         ###   ########.fr       */
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
		const	std::string _Name;
		const	int			_GradeToSign;
		const	int			_GradeToExecute;
		bool				_Signed;
	public:
		AForm();	//Default constructor
		AForm(const std::string& name, int GradeToSign, int GradeToExecute);
		AForm(const AForm& copy); //copy constructor
    	AForm& operator=(const AForm& copy); // assignament
		virtual ~AForm();	//destructor
	
		const	std::string&	getNameForm() const;
		int						getGradeToSign() const;
		int						getGradeToExecute() const;
		bool					getSigned() const;

		void					beSigned(const Bureaucrat& bureaucrat);
		virtual	void			execute(const Bureaucrat& executor) const = 0;
		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class FormNotSignedException : public std::exception
		{
			public:
				const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& os, const AForm& form);

#endif