/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 18:00:50 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/03/31 20:23:28 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Animal* miAnimal = new Dog();
	miAnimal->makeSound();
	Animal* miAnimal2 = new Cat();
	miAnimal2->makeSound();
	delete miAnimal;
	delete miAnimal2;
    return 0;
}