/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 17:10:33 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/02/13 19:39:55 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {

public:
	//CONSTRUCTOR
	Zombie();
	Zombie(std::string name);
	//DESTRUCTOR
	~Zombie();
	void	announce(void);
private:
	std::string	_name;
};

void	randomChump(std::string name);
Zombie* newZombie(std::string name);
#endif