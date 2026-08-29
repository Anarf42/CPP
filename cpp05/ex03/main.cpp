/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 18:49:18 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/08/20 14:28:57 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "AForm.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main(void)
{
	Intern intern;
	
	std::srand(static_cast<unsigned int>(std::time(NULL)));
	Bureaucrat boss("Boss", 1);
	AForm* form = intern.makeForm("robotomy request", "Bender");
	if (form)
	{
		std::cout << *form << std::endl;
		boss.signForm(*form);
		boss.executeForm(*form);
		delete form;
	}
	return (0);
}
