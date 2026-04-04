/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 12:46:59 by codespace         #+#    #+#             */
/*   Updated: 2026/04/03 01:26:11 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain* _Brain;
    public:
        Cat();  // default constructor
        Cat(const std::string& name);  
        Cat(const Cat& copy); //copy constructor
        Cat& operator=(const Cat& copy); // assignament
        ~Cat();//destructor
        void setIdea(int index, const std::string& idea);
        std::string getIdea(int index) const;
        void   makeSound(void) const;
        Brain* getBrain() const;
};

#endif