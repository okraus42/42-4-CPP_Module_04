/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 10:52:35 by okraus            #+#    #+#             */
/*   Updated: 2024/05/12 16:54:48 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "colours.hpp"

//https://www.geeksforgeeks.org/shallow-copy-and-deep-copy-in-c/

int main(void)
{
	{
		// Subject main
		std::cout << "SUBJECT MAIN" << std::endl;
		const Animal* dog = new Dog();
		const Animal* cat = new Cat();

		cat->idBrain();
		dog->idBrain();

		delete dog;
		delete cat;
		std::cout << std::endl;
	}
	{
		// Array with 10 dogs and 10 cats
		std::cout << "ARRAY WITH 10 DOGS AND 10 CATS" << std::endl;
		int				array_size = 20;
		const Animal	*animals[array_size];

		for (int i = 0; i < array_size / 2; i++)
			animals[i] = new Dog();
		for (int i = 10; i < array_size; i++)
			animals[i] = new Cat();
		for (int i = 0; i < array_size; i++)
		{
			std::cout << i << " ";
			animals[i]->idBrain();
		}
		for (int i = 0; i < array_size; i++)
			delete animals[i];
		std::cout << std::endl;
	}
	{
		// Deep copies of Cats
		std::cout << "DEEP COPIES OF CATS" << std::endl;
		Cat	*smartCat = new Cat();

		smartCat->setIdea(0, "It's a nice day.");
		smartCat->setIdea(1, "Sun is out.");
		smartCat->getIdeas();
		smartCat->idBrain();

		Cat *anotherSmartCat = new Cat(*smartCat);
		anotherSmartCat->setIdea(2, "Tadaaaa!");
		anotherSmartCat->getIdeas();
		anotherSmartCat->idBrain();
		anotherSmartCat->setIdea(0, "Tadaaaa!");
		anotherSmartCat->getIdeas();
		anotherSmartCat->idBrain();
		smartCat->getIdeas();
		smartCat->idBrain();

		delete smartCat;
		delete anotherSmartCat;
		std::cout << std::endl;
	}
	{
		// Deep copies of Dogs
		std::cout << "DEEP COPIES OF DOGS" << std::endl;
		Dog	*smartDog = new Dog();

		smartDog->setIdea(0, "It's a nice day.");
		smartDog->setIdea(1, "Sun is out.");
		smartDog->getIdeas();
		smartDog->idBrain();

		Dog *anotherSmartDog = new Dog(*smartDog);
		anotherSmartDog->setIdea(2, "Tadaaaa!");
		anotherSmartDog->getIdeas();
		anotherSmartDog->idBrain();
		anotherSmartDog->setIdea(0, "Tadaaaa!");
		anotherSmartDog->getIdeas();
		anotherSmartDog->idBrain();
		smartDog->getIdeas();
		smartDog->idBrain();

		delete smartDog;
		delete anotherSmartDog;
	}
	return (0);
}