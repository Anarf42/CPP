/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 03:21:16 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/02/03 17:24:28 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iomanip>
#include <iostream>
#include "Contact.hpp"

#define	RESET	"\033[0m"
#define	RED		"\033[31m"
#define YELLOW	"\033[33m"
#define GREEN	"\033[32m" 
#define CYAN	"\033[36m"
#define MAGENTA "\033[35m"

class PhoneBook
{
	private:
		Contact	contacts[8];
		int	count;
	public:
		PhoneBook();
		~PhoneBook();
		void add_contact(Contact person);
		void display_contacts() const;
		void show_contact() const;
};
void	do_add(PhoneBook& book);
void	do_search(PhoneBook& book);
std::string format(std::string str);
bool	check_empty(std::string input);
void	back_menu(void);

#endif