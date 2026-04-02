/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 17:58:38 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/03/31 20:23:00 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    private:
    public:
        Dog();  // default constructor
        Dog(const std::string& name);  
        Dog(const Dog& copy); //copy constructor
        Dog& operator=(const Dog& copy); // assignament
        ~Dog();//destructor
         void	makeSound(void);
};

#endif