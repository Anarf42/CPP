/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 17:43:03 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/03/12 09:37:46 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedNumber(0) 
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy) 
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed& Fixed::operator=(const Fixed& copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy)
		_fixedNumber = copy.getRawBits();
	return (*this);
}

Fixed::~Fixed() 
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _fixedNumber;
}

void Fixed::setRawBits(int const raw)
{
	_fixedNumber = raw;
}

