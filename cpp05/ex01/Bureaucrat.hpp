/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 18:49:06 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/09/13 18:19:55 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

class Form;
class Bureaucrat
{
	private:
		std::string const	_Name;
		int					_Grade;
	public:
		Bureaucrat();	//Default constructor
		Bureaucrat(std::string const& name, int grade);
		Bureaucrat(Bureaucrat const& copy); //copy constructor
        Bureaucrat& operator=(Bureaucrat const& copy); // assignament
		~Bureaucrat();	//destructor

		std::string const&	getName() const;
		int		getGrade() const;
		
		void	incrementGrade();
		void	decrementGrade();

		void	signForm(Form& form);

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

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif