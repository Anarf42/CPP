/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 20:02:18 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/03/28 20:27:14 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("default")
{
    _Health = 100;
    _Energy = 50; 
    _Attack = 20;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
    _Health = 100;
    _Energy = 50; 
    _Attack = 20;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy)
{
	*this = copy;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& copy)
{
	if (this != &copy)
	{
		_Name = copy._Name;
		_Health = copy._Health;
		_Attack = copy._Attack;
		_Energy = copy._Energy;
	}
	return (*this);
}

ScavTrap::~ScavTrap() 
{
	std::cout << "Destruction of " << GREEN << "ScavTrap" << RESET << std::endl;
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap is now in Gatekeeper mode" << std::endl;
}
