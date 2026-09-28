/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana <ana@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 17:58:04 by ana               #+#    #+#             */
/*   Updated: 2026/08/30 17:58:55 by ana              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"

#include <iostream>

int	main()
{
	Data	data;

	data.str = "CPP06";
	data.value = 42;

	Data*		original;
	uintptr_t	raw;
	Data*		result;

	original = &data;

	raw = Serializer::serialize(original);
	result = Serializer::deserialize(raw);

	std::cout << "Original pointer: " << original << std::endl;
	std::cout << "Serialized:       " << raw << std::endl;
	std::cout << "Result pointer:   " << result << std::endl;

	if (original == result)
		std::cout << "Pointers are equal" << std::endl;
	else
		std::cout << "Pointers are different" << std::endl;

	std::cout << "Name: " << result->str << std::endl;
	std::cout << "Value: " << result->value << std::endl;

	return (0);
}