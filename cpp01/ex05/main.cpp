/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 16:47:48 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/03/08 14:34:29 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl Harl;

	Harl.complain("DEBUG");
	Harl.complain("INFO");
	Harl.complain("WARNING");
	Harl.complain("ERROR");

	return (0);
}
