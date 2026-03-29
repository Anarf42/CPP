/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 20:01:43 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/03/29 14:37:04 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#include "FragTrap.hpp"

int main()
{
	std::cout << "=== Default constructor ===" << std::endl;
	FragTrap a;
	ClapTrap n;

	std::cout << "\n=== Param constructor ===" << std::endl;
	FragTrap b("Ana");
	ScavTrap s("Iria");
	ScavTrap t("ria");
	ClapTrap m("Bot");

	std::cout << "\n=== Copy constructor ===" << std::endl;
	FragTrap c(a);

	std::cout << "\n=== Assignment operator ===" << std::endl;
	t = s;
	a = b;
	n = m;

	std::cout << "\n=== Actions ===" << std::endl;
	b.attack("Enemy 1");
	b.takeDamage(20);
	b.beRepaired(10);
	b.highFivesGuys();

	std::cout << std::endl;
	std::cout << std::endl;

	b.attack("Enemy 2");
	b.takeDamage(200);
	b.beRepaired(10);
	b.highFivesGuys();

	std::cout << std::endl;
	std::cout << std::endl;

	t.attack("Enemy 3");
	t.takeDamage(200);
	t.beRepaired(10);
	t.guardGate();

	std::cout << std::endl;
	std::cout << std::endl;

	n.attack("Enemy 4");
	n.takeDamage(10);
	n.beRepaired(3);

	std::cout << "\n=== End of program ===" << std::endl;
	return 0;
}