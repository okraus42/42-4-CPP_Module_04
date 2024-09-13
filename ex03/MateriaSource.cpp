/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 15:30:55 by okraus            #+#    #+#             */
/*   Updated: 2024/09/13 14:00:27 by okraus           ###   ########.fr       */
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
	
	_inventory[0] = NULL;
	_inventory[1] = NULL;
	_inventory[2] = NULL;
	_inventory[3] = NULL;
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
	
	int			i;

	i = -1;
	while (++i < 4 && this->_inventory[i])
	{
		delete this->_inventory[i];
	}
}

void		MateriaSource::learnMateria(AMateria *materia)
{
	if (!this->_inventory[0])
		this->_inventory[0] = materia;
	else if (!this->_inventory[1])
		this->_inventory[1] = materia;
	else if (!this->_inventory[2])
		this->_inventory[2] = materia;
	else if (!this->_inventory[3])
		this->_inventory[3] = materia;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	int			i;

	i = -1;
	while (++i < 4 && this->_inventory[i])
	{
		if (this->_inventory[i]->getType() == type)
			return (this->_inventory[i]->clone());
	}
	return (NULL);
}