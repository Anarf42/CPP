/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 19:42:35 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/02/13 22:10:28 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : _name()
{
	std::cout << "A monster appear! Kill it!" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << _name << " destroyed " << std::endl;
}
void	Zombie::setName(std::string name)
{
	_name = name;
}
void	Zombie::announce(int i)
{
	std::cout << this->_name << " " << i << ":" << " BraiiiiiiinnnzzzZ..."<< std::endl;
}

Zombie* zombieHorde(int N, std::string name)
{
	Zombie* newz = new Zombie[N];
	for(int i = 0; i < N; i++)
		newz[i].setName(name);
	return (newz);
}