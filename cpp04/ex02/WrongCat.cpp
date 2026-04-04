/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 23:27:42 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/04/02 23:47:30 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") 
{
	std::cout << "Creating a new WrongCat "<< std::endl;
}

WrongCat::WrongCat(const std::string& name) : WrongAnimal(name)
{
	//_type = name;
	std::cout << _type << " was created" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal(copy){}

WrongCat& WrongCat::operator=(const WrongCat& copy)
{
	if (this != &copy)
		_type = copy._type;
	std::cout << "assignament of WrongCat" << std::endl;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor of WrongCat" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << _type << " said: Muu! Muu!" << std::endl;
}