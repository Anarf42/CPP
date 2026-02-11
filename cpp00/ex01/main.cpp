/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 03:16:36 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/02/03 17:31:11 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include "PhoneBook.hpp"

void	init_phonebook(void)
{
	PhoneBook	book;
	
	std::cout << YELLOW << "Welcome to the new Yellow Phonebook" << RESET << std::endl;
	std::cout << "Choose one: "	<< CYAN << "ADD, SEARCH " << RESET
								<< CYAN << "or " << RESET 
								<< CYAN << "EXIT" << RESET << std::endl;
	std::string n;
	std::cout << CYAN << "-> " << RESET;
	while (std::getline(std::cin, n))
	{
		if (n == "EXIT")
			break ;
		else if (n == "ADD")
			do_add(book);
		else if (n == "SEARCH")
			do_search(book);
		else
		{
			std::cout << RED <<"Invalid command; only ADD, SEARCH OR EXIT." << RESET << std::endl;
			std::cout << CYAN << "-> " << RESET;;
		}
	}
}

int	main(int argc, char **argv)
{
	(void)argv;
	if (argc != 1)
	{
		std::cout << "Error: use the program without arguments" << std::endl;
		return (1);
	}
	else
		init_phonebook();
	return (0);
}