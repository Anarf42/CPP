/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 18:49:06 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/07/10 14:55:10 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat
{
	private:
		const std::string	_Name;
		int					_Grade;
	public:
		Bureaucrat();	//Default constructor
		Bureaucrat(const std::string& name, int grade);
		Bureaucrat(const Bureaucrat& copy); //copy constructor
        Bureaucrat& operator=(const Bureaucrat& copy); // assignament
		~Bureaucrat();	//destructor

		const	std::string&	getName() const;
		int	getGrade() const;
		
		void	incrementGrade();
		void	decrementGrade();

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

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif