/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 18:00:50 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/04/04 14:48:13 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "----- CONSTRUCTORS -----" << std::endl;
    const Animal* meta = new Animal();     // Base class instance
    const Animal* dog = new Dog();         // Derived class Dog
    const Animal* cat = new Cat();         // Derived class Cat

    std::cout << std::endl;
    std::cout << "----- TYPES -----" << std::endl;
    std::cout << "dog type: " << dog->getType() << std::endl;
    std::cout << "cat type: " << cat->getType() << std::endl;
    std::cout << "animal type: " << meta->getType() << std::endl;

    std::cout << std::endl;
    std::cout << "----- SOUNDS -----" << std::endl;
    cat->makeSound();     // should output Cat sound
    dog->makeSound();     // should output Dog sound
    meta->makeSound();    // should output generic Animal sound

    std::cout << std::endl;
    std::cout << "----- DESTRUCTORS -----" << std::endl;
    delete cat;
    delete dog;
    delete meta;

    std::cout << std::endl;
    std::cout << "===== WRONG CLASSES =====" << std::endl;
    const WrongAnimal* wrongAnimal = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << std::endl;
    std::cout << "----- TYPES -----" << std::endl;
    std::cout << "WrongAnimal: " << wrongAnimal->getType() << std::endl;
    std::cout << "WrongCat: " << wrongCat->getType() << std::endl;
    
    std::cout << std::endl;
    std::cout << "----- SOUNDS -----" << std::endl;
    std::cout << "WrongAnimal: ";
    wrongAnimal->makeSound(); // base version
    std::cout << "WrongCat: ";
    wrongCat->makeSound();    // should also call base version (not virtual!)
    
    std::cout << std::endl;
    std::cout << "----- DESTRUCTORS -----" << std::endl;
    std::cout << "Deleting WrongAnimal: ";
    delete wrongAnimal;
    std::cout << "Deleting WrongCat: ";
    delete wrongCat;
    return (0);
}
