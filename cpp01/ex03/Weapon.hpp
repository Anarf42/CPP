/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 14:15:24 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/02/17 19:14:16 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string>


class Weapon
{
	private:
		std::string _type;
	public:
		Weapon(std::string type);
		~Weapon();
		const std::string& getType();
		void setType(std::string type);
};

#endif