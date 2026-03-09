/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 19:42:23 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/02/13 22:14:37 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	N;

	N = 4;
	std::cout << "Its possible we'll see " << N << " Zombies, take care" << std::endl;
	Zombie* zom = zombieHorde(N, "Zombie");
	for(int i = 0; i < N; i++)
		zom[i].announce(i);
	delete[] zom;
	return (0);
}