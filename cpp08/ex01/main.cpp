/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 14:09:15 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/09/17 19:39:02 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <vector>
#include <exception>

int main()
{
    std::cout << "--- Subject test ---" << std::endl;

    try
    {
        Span sp(5);

        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }


    std::cout << "\n--- Full Span test ---" << std::endl;

    try
    {
        Span sp(3);

        sp.addNumber(10);
        sp.addNumber(20);
        sp.addNumber(30);
        sp.addNumber(40);
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }


    std::cout << "\n--- Empty Span test ---" << std::endl;

    try
    {
        Span sp(5);

        std::cout << sp.shortestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }


    std::cout << "\n--- One element test ---" << std::endl;

    try
    {
        Span sp(5);

        sp.addNumber(42);

        std::cout << sp.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }


    std::cout << "\n--- Range test ---" << std::endl;

    try
    {
        Span sp(5);

        std::vector<int> values;

        values.push_back(6);
        values.push_back(3);
        values.push_back(17);
        values.push_back(9);
        values.push_back(11);

        sp.addNumbers(values.begin(), values.end());

        std::cout << "Shortest: "
                  << sp.shortestSpan() << std::endl;

        std::cout << "Longest: "
                  << sp.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }


    std::cout << "\n--- 10000 numbers test ---" << std::endl;

    try
    {
        Span sp(10000);

        std::vector<int> values;

        for (int i = 0; i < 10000; ++i)
            values.push_back(i);

        sp.addNumbers(values.begin(), values.end());

        std::cout << "Shortest: "
                  << sp.shortestSpan() << std::endl;

        std::cout << "Longest: "
                  << sp.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}