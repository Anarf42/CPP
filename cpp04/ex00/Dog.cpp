/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 17:58:30 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/04/04 14:32:17 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") 
{
	std::cout << CYAN << "A dog was created" << RESET << std::endl;
}

Dog::Dog(const std::string& name) : Animal(name)
{
	std::cout << CYAN << _type << " was created" << RESET <<  std::endl;
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
	std::cout << "Copy constructor of Dog has been called" << std::endl;
}

Dog& Dog::operator=(const Dog& copy)
{
	if (this != &copy)
		_type = copy._type;
	std::cout << "Assignament of dog" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	std::cout << RED << "Destructor of Dog" << RESET << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << CYAN << "The " << _type << " said: Guau! Guau!" << RESET << std::endl;
}
