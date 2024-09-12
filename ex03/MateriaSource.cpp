/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 15:30:55 by okraus            #+#    #+#             */
/*   Updated: 2024/09/12 14:56:43 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "colours.hpp"

MateriaSource::MateriaSource(void) : IMateriaSource()
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Default constructor of the MateriaSource class called.";
	ft_uncolorize();
	std::cout << std::endl;

}

MateriaSource::MateriaSource(const MateriaSource& copy) : IMateriaSource()
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Copy constructor of the MateriaSource class called.";
	ft_uncolorize();
	std::cout << std::endl;

	*this = copy;
}

MateriaSource	&MateriaSource::operator = (const MateriaSource &src)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Copy assignment of the MateriaSource class called.";
	ft_uncolorize();
	std::cout << std::endl;

	if (this == &src)
		return (*this);
	return (*this);
}

MateriaSource::~MateriaSource(void)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Destructor of the MateriaSource class called.";
	ft_uncolorize();
	std::cout << std::endl;
}