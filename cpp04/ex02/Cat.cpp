/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 18:00:16 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/04/02 23:10:46 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") 
{
	std::cout << "Creating a new cat "<< std::endl;
}

Cat::Cat(const std::string& name) : Animal(name)
{
	//_type = name;
	std::cout << _type << " was created" << std::endl;
}

Cat::Cat(const Cat& copy) : Animal(copy){}

Cat& Cat::operator=(const Cat& copy)
{
	if (this != &copy)
		_type = copy._type;
	std::cout << "assignament of Cat" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Destructor of Cat" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << _type << " said: Miau! Miau!" << std::endl;
}