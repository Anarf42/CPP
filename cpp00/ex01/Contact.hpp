/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:15:36 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/02/10 16:33:37 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact
{
	private:
		std::string first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;

	public:
		void	set_firstName(std::string name);
		void	set_lastName(std::string last_name);
		void	set_nickname(std::string nickname);
		void	set_phoneNumber(std::string phone_number);
		void	set_darkestSecret(std::string darkest_secret);
		
		std::string get_firstName(void) const { return this->first_name; }
		std::string get_lastName(void) const { return this->last_name; }
		std::string get_nickname(void) const { return this->nickname; }
		std::string get_phoneNumber(void) const { return this->phone_number; }
		std::string get_darkestSecret(void) const { return this->darkest_secret; }


		Contact();
		~Contact();
};

#endif