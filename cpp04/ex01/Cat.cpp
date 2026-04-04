/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 18:00:16 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/04/03 01:27:19 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") 
{
	std::cout << "Creating a new cat "<< std::endl;
	_Brain = new Brain();
}

Cat::Cat(const std::string& name) : Animal(name)
{
	//_type = name;
	std::cout << _type << " was created" << std::endl;
	_Brain = new Brain();
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
	_Brain = new Brain(*copy._Brain);
}

Cat& Cat::operator=(const Cat& copy)
{
	if (this != &copy)
	{
		_type = copy._type;
		delete _Brain;
		_Brain = new Brain(*copy._Brain);
	}
	std::cout << "assignament of Cat" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Destructor of Cat" << std::endl;
	delete _Brain;
}

void	Cat::makeSound(void) const
{
	std::cout << _type << " said: Miau! Miau!" << std::endl;
}

Brain* Cat::getBrain() const
{
    return _Brain;
}
