/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 12:38:56 by codespace         #+#    #+#             */
/*   Updated: 2026/04/03 01:49:59 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
	std::cout << _type << " Constructor default has been created" << std::endl;
}

Animal::Animal(const std::string& name) : _type(name)
{
	std::cout << _type << " Constructor with param has been created" << std::endl;
}

Animal::Animal(const Animal& copy) 
{
	*this = copy;
}

Animal& Animal::operator=(const Animal& copy)
{
	if (this != &copy)
	{
		_type = copy._type;	
	}
	return (*this);
}
Animal::~Animal() 
{
	std::cout << "Destructor has been called" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (_type);
}
