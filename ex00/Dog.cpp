/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 15:30:55 by okraus            #+#    #+#             */
/*   Updated: 2024/05/11 15:41:44 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "colours.hpp"

Dog::Dog(void) : Animal()
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Default constructor of the Dog class called.";
	ft_uncolorize();
	std::cout << std::endl;

	this->_type = "Dog";
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Copy constructor of the Dog class called.";
	ft_uncolorize();
	std::cout << std::endl;

	*this = copy;
}

Dog	&Dog::operator = (const Dog &src)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Copy assignment of the Dog class called.";
	ft_uncolorize();
	std::cout << std::endl;

	this->_type = src._type;
	return (*this);
}

Dog::~Dog(void)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Destructor of the Dog class called.";
	ft_uncolorize();
	std::cout << std::endl;
}

// Other member functions
void	Dog::makeSound(void) const
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << this->_type << " is barking.";
	ft_uncolorize();
	std::cout << std::endl;
}
