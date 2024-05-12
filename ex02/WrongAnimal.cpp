/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 15:30:55 by okraus            #+#    #+#             */
/*   Updated: 2024/05/11 16:06:21 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "colours.hpp"

WrongAnimal::WrongAnimal(void)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Default constructor of the WrongAnimal class called.";
	ft_uncolorize();
	std::cout << std::endl;

	this->_type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Copy constructor of the WrongAnimal class called.";
	ft_uncolorize();
	std::cout << std::endl;

	*this = copy;
}

WrongAnimal	&WrongAnimal::operator = (const WrongAnimal &src)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Copy assignment of the WrongAnimal class called.";
	ft_uncolorize();
	std::cout << std::endl;

	this->_type = src._type;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Destructor of the WrongAnimal class called.";
	ft_uncolorize();
	std::cout << std::endl;
}

// Getters
const std::string	WrongAnimal::getType(void) const
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << " [[getting type]] ";
	ft_uncolorize();
	return (this->_type);
}

// Other member functions
void	WrongAnimal::makeSound(void) const
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << this->_type << " is making a sound.";
	ft_uncolorize();
	std::cout << std::endl;
}
