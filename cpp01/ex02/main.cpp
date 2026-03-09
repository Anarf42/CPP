/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 13:14:47 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/02/14 14:00:45 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string* ptr = &str;
	std::string& ref = str;

	std::cout << "These are the addresses" << std::endl;
	std::cout << "The memory address of the string variable " << &str << std::endl;
	std::cout << "The memory address held by stringPTR " << ptr << std::endl;
	std::cout << "The memory address held by stringREF " << &ref << std::endl;

	std::cout << "These are the strings" << std::endl;
	std::cout << "The value of the string variable " << str << std::endl;
	std::cout << "The value pointed to by stringPTR " << *ptr << std::endl;
	std::cout << "The value pointed to by stringREF" << ref << std::endl;

	return (0);
}