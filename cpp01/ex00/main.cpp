/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 17:02:05 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/02/13 19:09:31 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{

	//Zombie zombie;
	randomChump("Jack ");
	Zombie* heapz = newZombie("Reaper ");
	heapz->announce();
	delete heapz;
	return (0);
}