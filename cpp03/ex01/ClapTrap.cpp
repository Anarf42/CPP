/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 16:35:09 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/03/22 17:55:36 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _Name("default"), _Health(10), _Energy(10), _Attack(10){}

ClapTrap::ClapTrap(const std::string& name) : _Name(name), _Health(10), _Energy(10), _Attack(10) {}

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

ClapTrap::~ClapTrap() {}


void	ClapTrap::attack(const std::string& target)
{
	if (_Energy <= 0 || _Health <= 0)
	{
		std::cout << _Name << " can't attack" << std::endl;
		return ;
	}
	std::cout << _Name << " attacks " << target << ", causing " << _Attack << " points of damage!" << std::endl;
	_Energy--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_Health <= 0)
		return ;
	std::cout  << _Name << " receive " << amount << " points of damage!" << std::endl;
	if (amount >= (unsigned int)_Health)
		_Health = 0;
	else
		_Health -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_Energy <= 0 || _Health <= 0)
	{
		std::cout << _Name << " can't be repaired" << std::endl;
		return ;
	}
	std::cout << _Name << " repairs itself for " << amount << " hit points" << std::endl;
	_Health += amount;
	_Energy--;
}