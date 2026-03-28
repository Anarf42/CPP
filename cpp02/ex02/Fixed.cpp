/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 17:30:07 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/03/28 18:20:31 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedNumber(0) 
{
	//std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed& copy) 
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}
Fixed& Fixed::operator=(const Fixed& copy)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy)
		_fixedNumber = copy._fixedNumber;
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
	//std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
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



Fixed Fixed::operator+(const Fixed& a) const
{
	Fixed result;
	result.setRawBits(_fixedNumber + a._fixedNumber);
	return result;
}

Fixed Fixed::operator-(const Fixed& a) const
{
	Fixed result;
	result.setRawBits(_fixedNumber - a._fixedNumber);
	return result;
}

Fixed Fixed::operator*(const Fixed& a) const
{
	Fixed result;
	result.setRawBits((static_cast<long>(_fixedNumber) * a._fixedNumber) >> _fractionalBits);
	return result;
}

Fixed Fixed::operator/(const Fixed& a) const
{
	Fixed result;
	if (a._fixedNumber != 0)
	{
		result.setRawBits((static_cast<long>(_fixedNumber) << _fractionalBits) / a._fixedNumber);
		return result;
	}
	else
	{
		std::cout << "Error, division by 0 it's not possible" << std::endl;
		return (Fixed());
	}
}

bool Fixed::operator>(const Fixed& b) const
{
	return (_fixedNumber > b._fixedNumber);
}

bool Fixed::operator<(const Fixed& b) const
{
	return (_fixedNumber < b._fixedNumber);
}

bool Fixed::operator<=(const Fixed& b) const
{
	return (_fixedNumber <= b._fixedNumber);
}

bool Fixed::operator>=(const Fixed& b) const
{
	return (_fixedNumber >= b._fixedNumber);
}
bool Fixed::operator==(const Fixed& b) const
{
	return (_fixedNumber == b._fixedNumber);
}
bool Fixed::operator!=(const Fixed& b) const
{
	return (_fixedNumber != b._fixedNumber);
}







Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	return ((a > b) ? a : b);
}
Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	return ((a < b) ? a : b);
}
const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	return ((a > b) ? a : b);
}
const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	return ((a < b) ? a : b);
}



Fixed& Fixed::operator++()
{
	_fixedNumber++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	_fixedNumber++;
	return temp;
}

Fixed& Fixed::operator--()
{
	_fixedNumber--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	_fixedNumber--;
	return temp;
}