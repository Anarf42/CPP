/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 12:46:59 by codespace         #+#    #+#             */
/*   Updated: 2026/03/31 13:55:47 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

class Cat : public Animal
{
    private:
    public:
        Cat();  // default constructor
        Cat(const std::string& name);  
        Cat(const std::string& copy); //copy constructor
        Cat& operator=(const Cat& copy); // assignament
        ~Cat();//destructor
         void	makeSound(void);

};

#endif