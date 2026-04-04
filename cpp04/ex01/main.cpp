/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 18:00:50 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/04/03 01:31:03 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Brain.hpp"

int main()
{
    std::cout << "----- POLYMORPHIC DESTRUCTION TEST -----" << std::endl;

    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;
    delete i;

    std::cout << std::endl << "----- DEEP COPY TEST -----" << std::endl;

    Dog dog1;
    dog1.getBrain()->setIdea(0, "Chase the cat");
    dog1.getBrain()->setIdea(1, "Eat snacks");

    // Copy constructor called
    Dog dog2 = dog1;

    std::cout << "Dog1's first idea: " << dog1.getBrain()->getIdea(0) << std::endl;
    std::cout << "Dog2's first idea: " << dog2.getBrain()->getIdea(0) << std::endl;

    // Modify one → the other should not change
    dog1.getBrain()->setIdea(0, "Sleep all day");

    std::cout << "\nAfter modification in dog1:" << std::endl;
    std::cout << "Dog1's first idea: " << dog1.getBrain()->getIdea(0) << std::endl;
    std::cout << "Dog2's first idea: " << dog2.getBrain()->getIdea(0) << std::endl;

    if (dog1.getBrain()->getIdea(0) != dog2.getBrain()->getIdea(0))
        std::cout << "\n✅ Deep copy confirmed: brains are independent." << std::endl;
    else
        std::cout << "\n❌ Shallow copy detected!" << std::endl;

    std::cout << std::endl << "Program finished." << std::endl;
    return 0;
}
