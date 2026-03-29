/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 20:01:34 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/03/29 14:38:14 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    _Health = 100;
    _Energy = 100; 
    _Attack = 30;
	std::cout << ORANGE << "Constructor default of FragTrap has been created" << RESET <<  std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
    _Health = 100;
    _Energy = 100; 
    _Attack = 30;
	std::cout << ORANGE << "Constructor param of FragTrap param has been created" << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy)
{
	std::cout << ORANGE << "Constructor copy of FragTrap has been created" << RESET << std::endl;
	*this = copy;
}

FragTrap& FragTrap::operator=(const FragTrap& copy)
{
	if (this != &copy)
	{
		_Name = copy._Name;
		_Health = copy._Health;
		_Attack = copy._Attack;
		_Energy = copy._Energy;
	}
	std::cout << ORANGE <<  "Assignment of FragTrap has been called" << RESET << std::endl;
	return (*this);
}

FragTrap::~FragTrap() 
{
	std::cout << "Destructor of FragTrap has been called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	if (_Health <= 0)
	{
		std::cout << _Name << " can't ask for a high five" << std::endl;
		return ;
	}
	else
    	std::cout << "FragTrap ask for a high five!" << std::endl;
}
