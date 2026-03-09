/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 19:42:49 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/02/13 21:51:16 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string	_name;
		//int	N;
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void	announce(int i);
		void	setName(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif