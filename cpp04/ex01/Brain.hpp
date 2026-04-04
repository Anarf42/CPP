/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 23:58:49 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/04/03 01:33:13 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
    protected:
        std::string _Ideas[100];
    public:
        Brain();  // default constructor
        Brain(const Brain& copy); //copy constructor
        Brain& operator=(const Brain& copy); // assignament
        virtual ~Brain();//destructor
        void setIdea(int index, const std::string& idea);
        std::string getIdea(int index) const;
};

#endif