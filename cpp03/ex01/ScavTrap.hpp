/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 20:02:12 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/03/29 13:47:33 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP   

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(); //constructor
        ScavTrap(const std::string& name);
        ScavTrap(const ScavTrap& copy); //copy constructor
        ScavTrap& operator=(const ScavTrap& copy); //Assignment
        ~ScavTrap(); //destructor

        void    guardGate(void);
        void    attack(const std::string& target);

};

#endif