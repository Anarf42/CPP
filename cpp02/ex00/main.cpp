/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 17:42:57 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/03/11 18:05:48 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	//Fixed b( a );
	//Fixed c;
	//c = b;
	std::cout << a.getRawBits() << std::endl;
	//std::cout << b.getRawBits() << std::endl;
	//std::cout << c.getRawBits() << std::endl;
	return 0;
}