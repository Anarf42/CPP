/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 17:14:19 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/02/03 18:53:42 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	back_menu(void)
{
	std::cout << MAGENTA << "Back to menu: " << RESET << std::endl;
	std::cout << CYAN << "-> " << RESET;
}

bool	check_empty(std::string input)
{
	if (input.empty())
	{
		std::cout << RED << "Error.. its empty " << RESET << std::endl;
		back_menu();
		return (false);
	}
	return (true);
}

std::string format(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}