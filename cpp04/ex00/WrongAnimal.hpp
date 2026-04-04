/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 23:27:24 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/04/04 14:38:16 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

#define GREEN	"\033[32m"
#define RED		"\033[31m"
#define RESET	"\033[0m"
#define YELLOW  "\033[33m"
#define CYAN    "\033[36m"
#define MAGENTA "\033[35m"
#define ORANGE	"\033[38;5;208m"


class WrongAnimal
{
    protected:
        std::string _type;
        std::string _color_target;
    public:
        WrongAnimal();  // default constructor
        WrongAnimal(const std::string& name);  
        WrongAnimal(const WrongAnimal& copy); //copy constructor
        WrongAnimal& operator=(const WrongAnimal& copy); // assignament
    	~WrongAnimal();//destructor
		std::string		getType(void) const;
        void	makeSound(void) const;
};

#endif