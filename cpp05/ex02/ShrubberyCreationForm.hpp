/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 18:13:22 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/08/19 20:34:08 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		std::string _target;
	public:
		ShrubberyCreationForm();	//Default constructor
		ShrubberyCreationForm(const std::string _target);
		ShrubberyCreationForm(const ShrubberyCreationForm& copy); //copy constructor
    	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& copy); // assignament
		~ShrubberyCreationForm();	//destructor

		void execute(const Bureaucrat& executor) const;
	class FileCreationException : public std::exception
	{
		public:
			const char* what() const throw();
	};
};

#endif