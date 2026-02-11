/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 14:42:47 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/02/10 16:39:49 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <cstring>

int	main(int argc, char **argv)
{
	int		i;
	int		j;

	if (argc == 1)
		std::cerr << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		j = 1;
		while (j < argc)
		{
			i = 0;
			while (argv[j][i])
			{
				std::cout << static_cast<char>(std::toupper(static_cast<unsigned char>(argv[j][i])));
				i++;
			}
			j++;
		}
		std::cout << std::endl;
	}
	return (0);
}
