/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 20:01:39 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/03/28 20:01:45 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
    private:
    public:
        FragTrap(); //constructor
        FragTrap(const std::string& name);
        FragTrap(const FragTrap& copy); //copia constructor
        FragTrap& operator=(const FragTrap& copy); //asignacion
        ~FragTrap(); //destructor

        void    highFivesGuys(void);
};

#endif