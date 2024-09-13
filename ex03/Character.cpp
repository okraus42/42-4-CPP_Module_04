/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 15:30:55 by okraus            #+#    #+#             */
/*   Updated: 2024/09/13 14:01:56 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "colours.hpp"

Character::Character(void) : ICharacter()
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Default constructor of the Character class called.";
	ft_uncolorize();
	std::cout << std::endl;

	this->_name = "Anonymous";
	this->_inventory[0] = NULL;
	this->_inventory[1] = NULL;
	this->_inventory[2] = NULL;
	this->_inventory[3] = NULL;
	this->_dropped = NULL;
}

Character::Character(const Character& copy) : ICharacter(copy)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Copy constructor of the Character class called.";
	ft_uncolorize();
	std::cout << std::endl;

	*this = copy;
}

Character	&Character::operator = (const Character &src)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Copy assignment of the Character class called.";
	ft_uncolorize();
	std::cout << std::endl;

	if (this == &src)
		return (*this);
	return (*this);
}

Character::~Character(void)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Destructor of the Character class called.";
	ft_uncolorize();
	std::cout << std::endl;

	int			i;

	i = -1;
	while (++i < 4 && this->_inventory[i])
	{
		delete this->_inventory[i];
	}
}

Character::Character(std::string name) : ICharacter()
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Overloaded constructor of the Character class called.";
	ft_uncolorize();
	std::cout << std::endl;

	this->_name = name;
	this->_inventory[0] = NULL;
	this->_inventory[1] = NULL;
	this->_inventory[2] = NULL;
	this->_inventory[3] = NULL;
	this->_dropped = NULL;
}

std::string const & Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria* m)
{
	if (!this->_inventory[0])
		this->_inventory[0] = m;
	else if (!this->_inventory[1])
		this->_inventory[1] = m;
	else if (!this->_inventory[2])
		this->_inventory[2] = m;
	else if (!this->_inventory[3])
		this->_inventory[3] = m;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return ;
	if (this->_inventory[idx])
	{
		// if (this->_dropped)
		// 	this->_inventory[idx].addDropped(this->_dropped);
		this->_dropped = this->_inventory[idx];
		this->_inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (this->_inventory[idx])
		this->_inventory[idx]->use(target);
}
