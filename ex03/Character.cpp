/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 15:30:55 by okraus            #+#    #+#             */
/*   Updated: 2024/09/13 18:11:37 by okraus           ###   ########.fr       */
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

	this->_name = copy._name;
	this->_inventory[0] = NULL;
	this->_inventory[1] = NULL;
	this->_inventory[2] = NULL;
	this->_inventory[3] = NULL;
	this->_dropped = NULL;
	if (copy._inventory[0])
		this->_inventory[0] = copy._inventory[0]->clone();
	if (copy._inventory[1])
		this->_inventory[1] = copy._inventory[1]->clone();
	if (copy._inventory[2])
		this->_inventory[2] = copy._inventory[2]->clone();
	if (copy._inventory[3])
		this->_inventory[3] = copy._inventory[3]->clone();
}

Character	&Character::operator = (const Character &src)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Copy assignment of the Character class called.";
	ft_uncolorize();
	std::cout << std::endl;

	if (this == &src)
		return (*this);
	this->_name = src._name;
	if (this->_dropped)
	{
		delete this->_dropped;
	}
	if (this->_inventory[0])
		delete this->_inventory[0];
	if (this->_inventory[1])
		delete this->_inventory[1];
	if (this->_inventory[2])
		delete this->_inventory[2];
	if (this->_inventory[3])
		delete this->_inventory[3];
	this->_inventory[0] = NULL;
	this->_inventory[1] = NULL;
	this->_inventory[2] = NULL;
	this->_inventory[3] = NULL;
	this->_dropped = NULL;
	if (src._inventory[0])
		this->_inventory[0] = src._inventory[0]->clone();
	if (src._inventory[1])
		this->_inventory[1] = src._inventory[1]->clone();
	if (src._inventory[2])
		this->_inventory[2] = src._inventory[2]->clone();
	if (src._inventory[3])
		this->_inventory[3] = src._inventory[3]->clone();
	return (*this);
}

Character::~Character(void)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Destructor of the Character class called.";
	ft_uncolorize();
	std::cout << std::endl;

	int	i;

	i = -1;
	while (++i < 4)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	if (this->_dropped)
	{
		// std::cout << reinterpret_cast<uintptr_t>(this->_dropped) << "deleted drop" << std::endl;
		delete this->_dropped;
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
	if (!m)
		return ;
	if (!m->getIsFresh())
		return ;
	if (!this->_inventory[0])
		this->_inventory[0] = m;
	else if (!this->_inventory[1])
		this->_inventory[1] = m;
	else if (!this->_inventory[2])
		this->_inventory[2] = m;
	else if (!this->_inventory[3])
		this->_inventory[3] = m;
	else
		return ;
	m->unsetFresh();
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return ;
	if (this->_inventory[idx])
	{
		if (this->_dropped)
			this->_inventory[idx]->addDropped(this->_dropped);
		this->_dropped = this->_inventory[idx];
		this->_inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
		return ;
	if (this->_inventory[idx])
		this->_inventory[idx]->use(target);
}
