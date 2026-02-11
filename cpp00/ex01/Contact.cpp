/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 19:55:05 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/02/03 02:11:39 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()	{}
Contact::~Contact()	{};

void	Contact::set_firstName(std::string name)
{
	this->first_name = name;
}

void	Contact::set_lastName(std::string last_name)
{
	this->last_name = last_name;
}

void	Contact::set_nickname(std::string nickname)
{
	this->nickname = nickname;
}

void	Contact::set_phoneNumber(std::string phone_number)
{
	this->phone_number = phone_number;
}

void	Contact::set_darkestSecret(std::string darkest_secret)
{
	this->darkest_secret = darkest_secret;
};
