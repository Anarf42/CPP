/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 14:58:25 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/02/17 19:25:55 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL)
{
}
HumanB::~HumanB() {}

void	HumanB::setWeapon(Weapon& newWeapon)
{
	this->weapon = &newWeapon;
}
void	HumanB::attack(void)
{
	if (weapon)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	 else
        std::cout << name << " has no weapon" << std::endl;
}
