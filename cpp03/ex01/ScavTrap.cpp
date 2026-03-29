/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 20:02:18 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/03/29 13:47:01 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    _Health = 100;
    _Energy = 50; 
    _Attack = 20;
	std::cout << MAGENTA << "Constructor default of Scavtrap has been created" << RESET <<  std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
    _Health = 100;
    _Energy = 50; 
    _Attack = 20;
	std::cout << MAGENTA << "Constructor param of Scavtrap param has been created" << RESET << std::endl;

}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy)
{
	std::cout << MAGENTA << "Constructor copy of Scavtrap has been created" << RESET << std::endl;
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
		_color = copy._color;
		_color_target = copy._color_target;
	}
	std::cout << MAGENTA <<  "Assignment of Scavtrap has been called" << RESET << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap() 
{
	std::cout << "Destructor of ScavTrap has been called" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (_Energy <= 0 || _Health <= 0)
	{
		std::cout << _color << _Name << RESET << " can't attack" << std::endl;
		return ;
	}
	if (target == "ScavTrap")
		_color_target = CYAN;
	else
		_color_target = YELLOW;
	std::cout << "Oh no! " << _color << _Name << RESET <<  " attacks " << _color_target << target << RESET << ", causing " << _Attack << " points of damage!" << std::endl;
	_Energy--;
	std::cout << _color << _Name <<  RESET << " energy has been reduced, actually is " << _Energy << std::endl;
}

void ScavTrap::guardGate(void)
{
    std::cout << CYAN << "ScavTrap is now in Gatekeeper mode" << RESET << std::endl;
}
