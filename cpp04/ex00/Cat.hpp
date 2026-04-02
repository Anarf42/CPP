/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 12:46:59 by codespace         #+#    #+#             */
/*   Updated: 2026/03/31 20:22:41 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    private:
    public:
        Cat();  // default constructor
        Cat(const std::string& name);  
        Cat(const Cat& copy); //copy constructor
        Cat& operator=(const Cat& copy); // assignament
        ~Cat();//destructor
         void   makeSound(void);
};

#endif