/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 18:00:16 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/03/31 20:30:50 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("cat ") {}

Cat::Cat(const std::string& name) : Animal(name)
{
	_type = name;
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

void	Cat::makeSound(void)
{
	std::cout << _type << "said: Miau! Miau!" << std::endl;
}