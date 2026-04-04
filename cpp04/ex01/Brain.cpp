/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 00:01:28 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/04/03 01:33:07 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << " Brain constructor default has been created" << std::endl;
}

Brain::Brain(const Brain& copy) 
{
	*this = copy;
	std::cout << "Brain copy constructor was called" << std::endl;
}

Brain& Brain::operator=(const Brain& copy)
{
	if (this != &copy)
	{
		for (int i = 0; i < 100; i++)
			_Ideas[i] = copy._Ideas[i];	
	}
	std::cout << "Brain operator constructor was called" << std::endl;
	return (*this);
}
Brain::~Brain() 
{
	std::cout << "Destructor has been called" << std::endl;
}
void Brain::setIdea(int index, const std::string& idea)
{
    if (index >= 0 && index < 100)
        _Ideas[index] = idea;
    else
        std::cout << "Invalid idea index " << index << std::endl;
}
std::string Brain::getIdea(int index) const
{
    if (index >= 0 && index < 100)
        return _Ideas[index];
    return "";
}