/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 20:01:34 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/03/28 20:01:35 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    _Health = 100;
    _Energy = 100; 
    _Attack = 30;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
    _Health = 100;
    _Energy = 100; 
    _Attack = 30;
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy)
{
	std::cout << "FragTrap constructor copy called" << std::endl;
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
	std::cout << "FragTrap asignation constructor called" << std::endl;
	return (*this);
}

FragTrap::~FragTrap() 
{
    std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap ask for a high five!" << std::endl;
}
