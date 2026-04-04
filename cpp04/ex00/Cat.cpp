/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 18:00:16 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/04/04 14:08:29 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") 
{
	std::cout << ORANGE << "A cat was created" << RESET << std::endl;
}

Cat::Cat(const std::string& name) : Animal(name)
{
	std::cout << ORANGE << _type << " was created" << RESET <<  std::endl;
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
	std::cout << "Copy constructor of Cat has been called" << std::endl;
}

Cat& Cat::operator=(const Cat& copy)
{
	if (this != &copy)
		_type = copy._type;
	std::cout << "Assignament of Cat" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	std::cout << RED << "Destructor of Cat" << RESET << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << ORANGE << _type << " said: Miau! Miau!" << RESET << std::endl;
}