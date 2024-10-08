/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 15:30:55 by okraus            #+#    #+#             */
/*   Updated: 2024/09/13 15:42:13 by okraus           ###   ########.fr       */
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
	this->_type = "ice";
	this->_nextDrop = NULL;
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

AMateria* Ice::clone() const
{
	return new Ice();
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
