/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 16:35:15 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/03/29 05:35:18 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("ClapTrap1");
    ClapTrap b("ClapTrap2");

    a.attack("ClapTrap2");
    std::cout<<std::endl;
    b.takeDamage(5);
    b.beRepaired(3);
    std::cout<<std::endl;
    a.attack("ClapTrap2");
    std::cout<<std::endl;
    b.attack("ClapTrap1");
    b.takeDamage(8);
    std::cout<<std::endl;
    a.attack("ClapTrap2");
    a.beRepaired(3);
    return 0;
}