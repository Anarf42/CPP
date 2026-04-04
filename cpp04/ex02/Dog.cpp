/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 17:58:30 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/04/02 23:57:40 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") 
{
	std::cout << "Creating a new dog "<< std::endl;
}

Dog::Dog(const std::string& name) : Animal(name)
{
	std::cout << _type << " was created" << std::endl;
}

Dog::Dog(const Dog& copy) : Animal(copy){}

Dog& Dog::operator=(const Dog& copy)
{
	if (this != &copy)
		_type = copy._type;
	std::cout << "assignament of dog" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Destructor of Dog" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "The " << _type << " said: Guau! Guau!" << std::endl;
}
