/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 14:52:49 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/09/13 18:22:32 by anruiz-d         ###   ########.fr       */
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
		std::string const _Name;
		int	const		_GradeToSign;
		int	const		_GradeToExecute;
		bool				_Signed;
	public:
		Form();	//Default constructor
		Form(std::string const& name, int GradeToSign, int GradeToExecute);
		Form(Form const& copy); //copy constructor
        Form& operator=(Form const& copy); // assignament
		~Form();	//destructor
	
		std::string const&	getNameForm() const;
		int						getGradeToSign() const;
		int						getGradeToExecute() const;
		bool					getSigned() const;

		void	beSigned(Bureaucrat const& bureaucrat);

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

};

std::ostream& operator<<(std::ostream& os, Form const& form);

#endif