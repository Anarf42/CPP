/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 16:47:48 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/03/09 17:58:02 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Only 2 arguments, the program and the case" << std::endl;
		return (1);
	}
	else
	{
		Harl Harl;

		Harl.complain(argv[1]);
		// Harl.complain("DEBUG");
		// Harl.complain("INFO");
		// Harl.complain("WARNING");
		// Harl.complain("ERROR");
	}
	return (0);
}
