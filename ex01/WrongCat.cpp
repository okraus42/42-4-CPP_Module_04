/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 15:30:55 by okraus            #+#    #+#             */
/*   Updated: 2024/05/11 16:06:58 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "colours.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Default constructor of the WrongCat class called.";
	ft_uncolorize();
	std::cout << std::endl;

	this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal(copy)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Copy constructor of the WrongCat class called.";
	ft_uncolorize();
	std::cout << std::endl;

	*this = copy;
}

WrongCat	&WrongCat::operator = (const WrongCat &src)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Copy assignment of the WrongCat class called.";
	ft_uncolorize();
	std::cout << std::endl;

	this->_type = src._type;
	return (*this);
}

WrongCat::~WrongCat(void)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Destructor of the WrongCat class called.";
	ft_uncolorize();
	std::cout << std::endl;
}

// Other member functions
void	WrongCat::makeSound(void) const
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << this->_type << " is meowing.";
	ft_uncolorize();
	std::cout << std::endl;
}
