/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 18:13:17 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/08/19 19:40:53 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTMYREQUESTFORM_HPP
# define ROBOTMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
		std::string _target;
	public:
		RobotomyRequestForm();	//Default constructor
		RobotomyRequestForm(const std::string _target);
		RobotomyRequestForm(const RobotomyRequestForm& copy); //copy constructor
    	RobotomyRequestForm& operator=(const RobotomyRequestForm& copy); // assignament
		~RobotomyRequestForm();	//destructor

		void execute(const Bureaucrat& executor) const;
};

#endif