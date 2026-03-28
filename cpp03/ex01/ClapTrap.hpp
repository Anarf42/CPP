/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 16:35:13 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/03/28 20:10:35 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
 # define CLAPTRAP_HPP

#include <iostream>
#include <cmath>

#define GREEN	"\033[32m"
#define RED		"\033[31m"
#define RESET	"\033[0m"

class ClapTrap
{
	protected:
		std::string	_Name;
		int			_Health;
		int			_Energy;
		int			_Attack;
	public:
		ClapTrap(); //constructor
		ClapTrap(const std::string& name);
		ClapTrap(const ClapTrap& copy); //copia constructor
		ClapTrap& operator=(const ClapTrap& copy); //asignacion
		~ClapTrap(); //destructor

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		ClapTrap operator-(const ClapTrap& a) const;
};


 #endif