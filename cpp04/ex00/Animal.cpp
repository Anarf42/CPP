/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 12:38:56 by codespace         #+#    #+#             */
/*   Updated: 2026/04/04 14:33:20 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
	std::cout << GREEN << _type << " Constructor default has been created" << RESET << std::endl;
}

Animal::Animal(const std::string& name) : _type(name)
{
	if (name == "Dog")
		_color_target = CYAN;
	else
		_color_target = ORANGE;
	std::cout << GREEN << "Animal constructor with param " << RESET << _color_target << _type << RESET << GREEN << " has been created" << RESET << std::endl;
}

Animal::Animal(const Animal& copy) 
{
	std::cout << "Copy constructor of Animal has been called" << std::endl;
	*this = copy;
}

Animal& Animal::operator=(const Animal& copy)
{
	std::cout << "Assignament of Animal has been called" << std::endl;
	if (this != &copy)
		_type = copy._type;	
	return (*this);
}
Animal::~Animal() 
{
	std::cout << RED << "Destructor of animal" << RESET << std::endl;
}

std::string	Animal::getType(void) const
{
	return (_color_target + _type + RESET);
}

void	Animal::makeSound(void) const
{
	std::cout << YELLOW << "Some generic animal sound"  << RESET << std::endl;
}