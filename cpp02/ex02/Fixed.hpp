/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 17:30:15 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/03/21 19:19:23 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					_fixedNumber;
		static	const	int	_fractionalBits = 8;
	public:
		Fixed();
		Fixed(const Fixed& copy);
		Fixed& operator=(const Fixed& copy);
        Fixed(const int parameter);
        Fixed(const float number);
		~Fixed();
		
		Fixed operator+(const Fixed& a) const;
		Fixed operator-(const Fixed& a) const;
		Fixed operator*(const Fixed& a) const;
		Fixed operator/(const Fixed& a) const;
		Fixed& operator++(); //pre
		Fixed operator++(int); //post
		Fixed& operator--(); //pre
		Fixed operator--(int); //post
		bool operator>(const Fixed& other) const;
		bool operator<(const Fixed& other) const;
		bool operator<=(const Fixed& other) const;
		bool operator>=(const Fixed& other) const;
		bool operator==(const Fixed& other) const;
		bool operator!=(const Fixed& other) const;
		static	Fixed& max(Fixed& a, Fixed& b);
		static const Fixed& max(const Fixed& a, const Fixed& b);
		static	Fixed& min(Fixed& a, Fixed& b);
		static const Fixed& min(const Fixed& a, const Fixed& b);
		

		int		getRawBits(void) const; 
		void	setRawBits(int const raw);
        float	toFloat(void) const;
        int		toInt(void) const;
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif