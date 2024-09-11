/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 15:30:55 by okraus            #+#    #+#             */
/*   Updated: 2024/09/11 18:21:09 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "colours.hpp"

IMateriaSource::IMateriaSource(void)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Default constructor of the IMateriaSource class called.";
	ft_uncolorize();
	std::cout << std::endl;

	this->_type = "IMateriaSource";
}

IMateriaSource::IMateriaSource(const IMateriaSource& copy)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Copy constructor of the IMateriaSource class called.";
	ft_uncolorize();
	std::cout << std::endl;

	*this = copy;
}

IMateriaSource	&IMateriaSource::operator = (const IMateriaSource &src)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Copy assignment of the IMateriaSource class called.";
	ft_uncolorize();
	std::cout << std::endl;

	if (this == &src)
		return (*this);
	return (*this);
}

IMateriaSource::~IMateriaSource(void)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Destructor of the IMateriaSource class called.";
	ft_uncolorize();
	std::cout << std::endl;
}
