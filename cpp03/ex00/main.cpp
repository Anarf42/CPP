/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 16:35:15 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/03/22 16:36:06 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("ClapTrap1");
    ClapTrap b("ClapTrap2");

    a.attack("ClapTrap2");
    b.takeDamage(5);
    b.beRepaired(3);
    a.attack("ClapTrap2");
    b.takeDamage(8);
    //a.attack("ClapTrap2");
    return 0;
}