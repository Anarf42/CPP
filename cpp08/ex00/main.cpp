/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 13:12:12 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/09/12 14:09:12 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <iostream>

int main()
{
	try
	{
		std::vector<int> nums;
		nums.push_back(10);
		nums.push_back(20);
		nums.push_back(30);
		nums.push_back(40);
		std::vector<int>::iterator it = easyfind(nums, 50);	
		std::cout << "The value is: " << *it <<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
}