/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 15:30:55 by okraus            #+#    #+#             */
/*   Updated: 2024/09/11 18:20:41 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "colours.hpp"

Ice::Ice(void) : AMateria()
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Default constructor of the Ice class called.";
	ft_uncolorize();
	std::cout << std::endl;

	this->_type = "Ice";
	this->_brain = new Brain();
}

Ice::Ice(const Ice& copy) : AMateria(copy)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Copy constructor of the Ice class called.";
	ft_uncolorize();
	std::cout << std::endl;

	*this = copy;
}

Ice	&Ice::operator = (const Ice &src)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Copy assignment of the Ice class called.";
	ft_uncolorize();
	std::cout << std::endl;

	if (this == &src)
		return (*this);
	return (*this);
}

Ice::~Ice(void)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Destructor of the Ice class called.";
	ft_uncolorize();
	std::cout << std::endl;
}
