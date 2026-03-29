/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 16:35:09 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/03/29 05:33:26 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _Name("default"), _Health(10), _Energy(10), _Attack(10)
{
	std::cout << "Constructor default has beed created" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : _Name(name), _Health(10), _Energy(10), _Attack(10) 
{
	std::cout << GREEN << "Constructor with param has been created" << RESET << std::endl;
	if (_Name == "ClapTrap1")
		_color = CYAN;
	else
		_color = YELLOW;
}

ClapTrap::ClapTrap(const ClapTrap& copy) 
{
	*this = copy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy)
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
ClapTrap::~ClapTrap() 
{
	std::cout << RED << "Destructor has been called" << RESET << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (_Energy <= 0 || _Health <= 0)
	{
		std::cout << _color << _Name << RESET << " can't attack" << std::endl;
		return ;
	}
	if (target == "ClapTrap1")
		_color_target = CYAN;
	else
		_color_target = YELLOW;
	std::cout << _color << _Name << RESET <<  " attacks " << _color_target << target << RESET << ", causing " << _Attack << " points of damage!" << std::endl;
	_Energy--;
	std::cout << _color << _Name <<  RESET << " energy has been reduced, actually is " << _Energy << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_Health <= 0)
		return ;
	std::cout << _color << _Name  << RESET <<  " receive " << amount << " points of damage!" << std::endl;
	if (amount >= (unsigned int)_Health)
		_Health = 0;
	else
		_Health -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_Energy <= 0 || _Health <= 0)
	{
		std::cout << _color << _Name << RESET << " can't be repaired" << std::endl;
		return ;
	}
	std::cout << _color << _Name << RESET << " repairs itself for " << amount << " hit points" << std::endl;
	_Health += amount;
	_Energy--;
	std::cout << _color << _Name << RESET <<  " energy has been reduced, actually is " << _Energy << std::endl;
}