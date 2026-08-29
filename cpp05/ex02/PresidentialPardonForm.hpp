/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 18:13:10 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/08/19 19:33:55 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		std::string _target;
	public:
		PresidentialPardonForm();	//Default constructor
		PresidentialPardonForm(const std::string _target);
		PresidentialPardonForm(const PresidentialPardonForm& copy); //copy constructor
    	PresidentialPardonForm& operator=(const PresidentialPardonForm& copy); // assignament
		~PresidentialPardonForm();	//destructor

		void execute(const Bureaucrat& executor) const;
};

#endif