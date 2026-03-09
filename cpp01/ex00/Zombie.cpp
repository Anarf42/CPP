/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 17:01:42 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/02/13 21:58:19 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

	//CONSTRUCTOR
	Zombie::Zombie() : _name("default")
	{
		std::cout << _name << " created 1" << std::endl;
	}
	Zombie::Zombie(std::string name) : _name(name)
	{
		std::cout << _name << "created " << std::endl;
	}
	//DESTRUCTOR
	Zombie::~Zombie() 
	{
		std::cout << _name << " destroyed" << std::endl;
	}

	void	Zombie::announce()
	{
			std::cout << this->_name << ":" << " BraiiiiiiinnnzzzZ..."<< std::endl;

	}
	//recibir el nombre en el contructor o en el setter para el nombre