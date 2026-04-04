/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 23:27:24 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/04/02 23:34:53 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
    protected:
        std::string _type;
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