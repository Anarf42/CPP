/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 16:59:17 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/02/17 19:24:16 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type){}
Weapon::~Weapon () {}

const	std::string& Weapon::getType()
{
	return this->_type;
}

void	Weapon::setType(std::string newType)
{
	_type = newType;
}