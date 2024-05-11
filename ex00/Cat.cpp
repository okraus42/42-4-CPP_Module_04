/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 15:30:55 by okraus            #+#    #+#             */
/*   Updated: 2024/05/11 15:57:12 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "colours.hpp"

Cat::Cat(void) : Animal()
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Default constructor of the Cat class called.";
	ft_uncolorize();
	std::cout << std::endl;

	this->_type = "Cat";
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Copy constructor of the Cat class called.";
	ft_uncolorize();
	std::cout << std::endl;

	*this = copy;
}

Cat	&Cat::operator = (const Cat &src)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Copy assignment of the Cat class called.";
	ft_uncolorize();
	std::cout << std::endl;

	this->_type = src._type;
	return (*this);
}

Cat::~Cat(void)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Destructor of the Cat class called.";
	ft_uncolorize();
	std::cout << std::endl;
}

// Other member functions
void	Cat::makeSound(void) const
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << this->_type << " is meowing.";
	ft_uncolorize();
	std::cout << std::endl;
}
