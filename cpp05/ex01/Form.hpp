/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 14:52:49 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/08/14 13:20:27 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <exception>
#include <iostream>

class Bureaucrat;
class Form {
	private:
		const	std::string _Name;
		const	int			_GradeToSign;
		const	int			_GradeToExecute;
		bool				_Signed;
	public:
		Form();	//Default constructor
		Form(const std::string& name, int GradeToSign, int GradeToExecute);
		Form(const Form& copy); //copy constructor
        Form& operator=(const Form& copy); // assignament
		~Form();	//destructor
	
		const	std::string&	getNameForm() const;
		int						getGradeToSign() const;
		int						getGradeToExecute() const;
		bool					getSigned() const;

		void	beSigned(const Bureaucrat& bureaucrat);

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

};

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif