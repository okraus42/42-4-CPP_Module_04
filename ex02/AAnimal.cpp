/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 15:30:55 by okraus            #+#    #+#             */
/*   Updated: 2024/05/12 20:30:27 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "colours.hpp"

AAnimal::AAnimal(void)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Default constructor of the AAnimal class called.";
	ft_uncolorize();
	std::cout << std::endl;

	this->_type = "AAnimal";
}

AAnimal::AAnimal(const AAnimal& copy)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Copy constructor of the AAnimal class called.";
	ft_uncolorize();
	std::cout << std::endl;

	*this = copy;
}

AAnimal	&AAnimal::operator = (const AAnimal &src)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Copy assignment of the AAnimal class called.";
	ft_uncolorize();
	std::cout << std::endl;

	this->_type = src._type;
	return (*this);
}

AAnimal::~AAnimal(void)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Destructor of the AAnimal class called.";
	ft_uncolorize();
	std::cout << std::endl;
}

// Getters
const std::string	AAnimal::getType(void) const
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << " [[getting type]] ";
	ft_uncolorize();
	return (this->_type);
}

// // Other member functions
// void	AAnimal::makeSound(void) const
// {
// 	ft_colorize(reinterpret_cast<uintptr_t>(this));
// 	std::cout << this->_type << " is making a sound.";
// 	ft_uncolorize();
// 	std::cout << std::endl;
// }

void	AAnimal::idBrain(void)	const
{
	return ;
}