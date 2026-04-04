/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 23:31:50 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/04/02 23:42:51 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
	std::cout << _type << " Constructor default has been created" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& name) : _type(name)
{
	std::cout << _type << " Constructor of with param has been created" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy) 
{
	*this = copy;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy)
{
	if (this != &copy)
	{
		_type = copy._type;	
	}
	return (*this);
}
WrongAnimal::~WrongAnimal() 
{
	std::cout << "Destructor of WrongAnimal has been called" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (_type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Some generic animal sound???"  << std::endl;
}