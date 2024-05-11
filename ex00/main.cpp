/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 10:52:35 by okraus            #+#    #+#             */
/*   Updated: 2024/05/11 16:08:06 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "colours.hpp"

//https://www.geeksforgeeks.org/cpp-polymorphism/

int main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	// ...

	const WrongAnimal* wrongmeta = new WrongAnimal();
	const WrongAnimal* wrongi = new WrongCat();
	std::cout << wrongi->getType() << " " << std::endl;
	wrongi->makeSound(); //will output the Wrong cat sound!
	wrongmeta->makeSound();
	// ...
	delete wrongmeta;
	delete wrongi;
	delete meta;
	delete j;
	delete i;
	// for (int i = 0xff00; i < 0x20000; i += 4)
	// {
	// 	ft_colorize(i);
	// 	std::cout << "Hello " << i << " World!";
	// 	ft_uncolorize();
	// 	std::cout << std::endl;
	// }
	return (0);
}