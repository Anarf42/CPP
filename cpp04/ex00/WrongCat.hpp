/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 23:28:53 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/04/02 23:30:27 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef	WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    private:
    public:
        WrongCat();  // default constructor
        WrongCat(const std::string& name);  
        WrongCat(const WrongCat& copy); //copy constructor
        WrongCat& operator=(const WrongCat& copy); // assignament
        ~WrongCat();//destructor
        void   makeSound(void) const;
};

#endif