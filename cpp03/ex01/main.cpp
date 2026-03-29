/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/29 13:18:51 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/03/29 13:49:34 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    std::cout << "=== Default constructor ===" << std::endl;
    ScavTrap a;

    std::cout << "\n=== Param constructor ===" << std::endl;
    ScavTrap b("Ana");

    std::cout << "\n=== Copy constructor ===" << std::endl;
    ScavTrap c(b);

    std::cout << "\n=== Assignment operator ===" << std::endl;
    a = b;

    std::cout << "\n=== Actions ===" << std::endl;
    b.attack("enemy");
    b.guardGate();
    c.takeDamage(10);
    b.beRepaired(5);

    std::cout << "\n=== Destruction ===" << std::endl;

    return 0;
}