/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 17:40:35 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/02/03 17:32:03 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()	:	count(0) {}
PhoneBook::~PhoneBook() {}

void PhoneBook::add_contact(Contact person)
{
	this->contacts[this->count % 8] = person;
    this->count++;
}

void	PhoneBook::show_contact(void) const
{
	std::string input;
	int	i;
	int	limit;

	if (count == 0)
	{
		std::cout << "Book is empty... " << std::endl;
		return ;
	}
	std::cout << "Select one contact:" << std::endl;
	std::cout << CYAN << "-> " << RESET;
	std::getline(std::cin, input);
	if (input.empty())
	{
		std::cout << RED << "Error.. its empty " << RESET << std::endl;
		return ;
	}
	for (size_t j = 0; j < input.length(); j++)
	{
		if (!std::isdigit(input[j]))
		{
			std::cout << RED << "Error.. its not a number" << RESET << std::endl;
			return ;
		}
	}
	if (count > 8)
		limit = 8;
	else
		limit = count;
	i = std::stoi(input);
	if (i >= 0 && i < limit)
		std::cout	<< "Name: "<< contacts[i].get_firstName() << "\n"
					<< "Last name: " << contacts[i].get_lastName() << "\n"
					<< "Nickname: " << contacts[i].get_nickname() << "\n"
					<< "Phone Number: " << contacts[i].get_phoneNumber() << "\n"
					<< "Darkest secret: " << contacts[i].get_darkestSecret()
		<< std::endl;
	else
		std::cout << RED << "Error.. Doesn't exist :( " << RESET << std::endl;
}

void PhoneBook::display_contacts(void) const
{
	int	limit;

	if (count > 8)
		limit = 8;
	else
		limit = count;
	for (int i = 0; i < limit; i++)
	{
		 std::cout << std::setw(10) << std::right << i << "|"
                  << std::setw(10) << std::right << format(contacts[i].get_firstName()) << "|"
                  << std::setw(10) << std::right << format(contacts[i].get_phoneNumber()) << "|"
                  << std::setw(10) << std::right << format(contacts[i].get_nickname()) << "|" << "\n";
	}
	show_contact();
}

void	do_search(PhoneBook& book)
{
	std::cout	<< GREEN << std::setw(10) << std::right << "Index " << "|" 
				<< std::setw(10) << std::right << "Name " << "|" 
				<< std::setw(10) << std::right << "Phone " << "|" 
				<< std::setw(10) << std::right << "Nickname " << "|" << RESET << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	book.display_contacts();
	back_menu();
}

void do_add(PhoneBook& book)
{
	Contact person;
	std::string	input;

	std::cout << "Name: ";
	std::getline(std::cin, input);
	if (!check_empty(input))
		return ;
	person.set_firstName(input);
	
	std::cout << "Last Name: ";
	std::getline(std::cin, input);
	if (!check_empty(input))
		return ;
	person.set_lastName(input);

	std::cout << "Nickname: ";
	std::getline(std::cin, input);
	if (!check_empty(input))
		return ;
	person.set_nickname(input);

	std::cout << "Phone numer: ";
	std::getline(std::cin, input);
	if (!check_empty(input))
		return ;
	for (size_t i = 0; i < input.length(); i++)
	{
		if (!std::isdigit(input[i]))
		{
			std::cout << RED << "Error.. its not a number" << RESET << std::endl;
			back_menu();
			return ;
		}
	}
	person.set_phoneNumber(input);

	std::cout << "Darkest secret: ";
	std::getline(std::cin, input);
	if (!check_empty(input))
		return ;
	person.set_darkestSecret(input);
	book.add_contact(person);
	back_menu();
}

