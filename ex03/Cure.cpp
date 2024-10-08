/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 15:30:55 by okraus            #+#    #+#             */
/*   Updated: 2024/09/13 15:41:52 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "colours.hpp"

Cure::Cure(void) : AMateria()
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Default constructor of the Cure class called.";
	ft_uncolorize();
	std::cout << std::endl;
	this->_type = "cure";
	this->_fresh = true;
	this->_nextDrop = NULL;
}

Cure::Cure(const Cure& copy) : AMateria(copy)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Copy constructor of the Cure class called.";
	ft_uncolorize();
	std::cout << std::endl;

	*this = copy;
}

Cure	&Cure::operator = (const Cure &src)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Copy assignment of the Cure class called.";
	ft_uncolorize();
	std::cout << std::endl;

	if (this == &src)
		return (*this);
	this->_fresh = src._fresh;
	return (*this);
}

Cure::~Cure(void)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Destructor of the Cure class called.";
	ft_uncolorize();
	std::cout << std::endl;
}

AMateria* Cure::clone() const
{
	return new Cure();
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
