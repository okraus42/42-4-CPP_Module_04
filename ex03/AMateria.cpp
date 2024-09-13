/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 15:30:55 by okraus            #+#    #+#             */
/*   Updated: 2024/09/13 13:50:13 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "colours.hpp"

AMateria::AMateria(void)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Default constructor of the AMateria class called.";
	ft_uncolorize();
	std::cout << std::endl;

	this->_type = "AMateria";
}

AMateria::AMateria(const AMateria& copy)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Copy constructor of the AMateria class called.";
	ft_uncolorize();
	std::cout << std::endl;

	*this = copy;
}

AMateria	&AMateria::operator = (const AMateria &src)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Copy assignment of the AMateria class called.";
	ft_uncolorize();
	std::cout << std::endl;

	this->_type = src._type;
	return (*this);
}

AMateria::~AMateria(void)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Destructor of the AMateria class called.";
	ft_uncolorize();
	std::cout << std::endl;
}

AMateria::AMateria(std::string const & type)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Overloaded constructor of the AMateria class called.";
	ft_uncolorize();
	std::cout << std::endl;

	if  (type == "AMateria")
		this->_type = "AMateria";
	else
		this->_type = "AMateria";
}

// Getters
const std::string &	AMateria::getType(void) const
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << " [[getting type]] ";
	ft_uncolorize();
	return (this->_type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "* AMateria is being used on " << target.getName() << "*" << std::endl;
}