/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 17:12:09 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/09/06 20:52:34 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	print(std::string &str)
{
	for (size_t i = 0; i < str.length(); i++)
		str[i] = std::toupper(str[i]);
}

void	multiple(int &str)
{
	str *= 2;
}
int	main()
{
	int	array [] = {1, 2, 3, 4};
	std::string	str[] = {"hey", "!", "buddy"};

	::iter(str, 3, print);
	for (int i = 0; i < 3; i++)
		std::cout << str[i] << std::endl;
	
	::iter(array, 4, multiple);
	for (int i = 0; i < 4; i++)
		std::cout << array[i] << std::endl;
}