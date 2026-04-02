/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 12:42:44 by codespace         #+#    #+#             */
/*   Updated: 2026/03/31 20:24:05 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    protected:
        std::string _type;
    public:
        Animal();  // default constructor
        Animal(const std::string& name);  
        Animal(const Animal& copy); //copy constructor
        Animal& operator=(const Animal& copy); // assignament
        virtual ~Animal();//destructor
        virtual void	makeSound(void);
};

#endif