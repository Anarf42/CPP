/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 16:47:44 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/03/08 18:00:41 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void debug(void)
{
	std::cout << "hola" << std::endl;
}
void	info(void)
{
	std::cout << "mundo" << std::endl;
}

void	warning(void)
{
	std::cout << "buenos" << std::endl;	
}
void	error(void)
{
	std::cout << "dias" << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string levels [4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	void	(Harl::*function[4])() = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*function[i])();
			return ;
		}
	}
}