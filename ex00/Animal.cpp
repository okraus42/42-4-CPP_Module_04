/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 15:30:55 by okraus            #+#    #+#             */
/*   Updated: 2024/05/12 20:43:41 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "colours.hpp"

Animal::Animal(void)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Default constructor of the Animal class called.";
	ft_uncolorize();
	std::cout << std::endl;

	this->_type = "Animal";
}

Animal::Animal(const Animal& copy)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Copy constructor of the Animal class called.";
	ft_uncolorize();
	std::cout << std::endl;

	*this = copy;
}

Animal	&Animal::operator = (const Animal &src)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Copy assignment of the Animal class called.";
	ft_uncolorize();
	std::cout << std::endl;

	this->_type = src._type;
	return (*this);
}

Animal::~Animal(void)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Destructor of the Animal class called.";
	ft_uncolorize();
	std::cout << std::endl;
}

// Getters
const std::string	Animal::getType(void) const
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << " [[getting type]] ";
	ft_uncolorize();
	return (this->_type);
}

// Other member functions
void	Animal::makeSound(void) const
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << this->_type << " is making a sound.";
	ft_uncolorize();
	std::cout << std::endl;
}
