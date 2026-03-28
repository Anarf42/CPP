/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 16:17:31 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/03/28 16:17:32 by anruiz-d         ###   ########.fr       */
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

Fixed::Fixed(const int parameter)
{
	_fixedNumber = parameter << _fractionalBits;
}

Fixed::Fixed(const float number)
{
	_fixedNumber = roundf(number * (1 << _fractionalBits));
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

float   Fixed::toFloat(void) const
{
	return (float)_fixedNumber / (1 << _fractionalBits);
}

int		Fixed::toInt(void) const
{
	return _fixedNumber >> _fractionalBits;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return out;
}