/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana <ana@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 18:06:51 by ana               #+#    #+#             */
/*   Updated: 2026/08/30 18:07:16 by ana              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

#include <iostream>
#include <cstdlib>
#include <ctime>

int	main()
{
	Base*	ptr;

	std::srand(std::time(NULL));

	for (int i = 0; i < 5; i++)
	{
		ptr = generate();

		std::cout << "Pointer:   ";
		identify(ptr);

		std::cout << "Reference: ";
		identify(*ptr);

		delete ptr;

		std::cout << std::endl;
	}

	return (0);
}