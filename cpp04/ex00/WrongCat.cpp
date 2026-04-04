/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 23:27:42 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/04/04 14:43:59 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") 
{
	std::cout << ORANGE << "Creating a new WrongCat" << RESET << std::endl;
}

WrongCat::WrongCat(const std::string& name) : WrongAnimal(name)
{
	std::cout << ORANGE << _type << " was created" << RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal(copy)
{
	std::cout << "Copy constructor of WrongCat has been called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& copy)
{
	if (this != &copy)
		_type = copy._type;
	std::cout << "Assignament of WrongCat" << std::endl;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << RED << "Destructor of WrongCat" << RESET << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << ORANGE << _type << " said: Miau! Miau!" << RESET << std::endl;
}