/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 16:35:13 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/03/22 17:45:34 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
 # define CLAPTRAP_HPP

#include <iostream>
#include <string>
#include <cmath>

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