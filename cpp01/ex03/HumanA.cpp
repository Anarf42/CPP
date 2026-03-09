/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 14:58:27 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/02/17 19:16:28 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) 
		: name(name), weapon(weapon) 
{}

HumanA::~HumanA() {};

void	HumanA::attack(void)
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

