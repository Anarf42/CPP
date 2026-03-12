/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 17:43:00 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/03/11 20:14:59 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <string>
#include <iostream>

class Fixed
{
	private:
		int					_fixedNumber;
		static	const	int	_fractionalBits = 8;
	public:
		Fixed();
		Fixed(const Fixed& copy);
		Fixed & operator=(const Fixed& copy);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif