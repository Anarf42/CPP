/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 23:31:50 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/04/04 14:41:30 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
	std::cout << GREEN << _type << " Constructor default has been created" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& name) : _type(name)
{
	if (name == "WrongDog")
		_color_target = CYAN;
	else
		_color_target = ORANGE;
	std::cout << GREEN << "WrongAnimal constructor with param " << RESET << _color_target << _type << RESET << GREEN << " has been created" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy) 
{
	*this = copy;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy)
{
	if (this != &copy)
		_type = copy._type;	
	return (*this);
}
WrongAnimal::~WrongAnimal() 
{
	std::cout << RED << "Destructor of WrongAnimal has been called" << RESET << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (_color_target + _type + RESET);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << YELLOW << "Some generic animal sound????"  << RESET << std::endl;
}