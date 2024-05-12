/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 15:30:55 by okraus            #+#    #+#             */
/*   Updated: 2024/05/12 20:46:33 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "colours.hpp"

Dog::Dog(void) : Animal()
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Default constructor of the Dog class called.";
	ft_uncolorize();
	std::cout << std::endl;

	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Copy constructor of the Dog class called.";
	ft_uncolorize();
	std::cout << std::endl;

	*this = copy;
}

Dog	&Dog::operator = (const Dog &src)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Copy assignment of the Dog class called.";
	ft_uncolorize();
	std::cout << std::endl;

	if (this == &src)
		return (*this);
	this->_type = src._type;
	if (src._brain)
	{
		this->_brain = new Brain(*src._brain);
		for (int i = 0; i < 100; ++i)
		{
			this->_brain->setIdea(i, src._brain->getIdea(i));
		}
	}
	else
		this->_brain = NULL;
	return (*this);
}

Dog::~Dog(void)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Destructor of the Dog class called.";
	ft_uncolorize();
	std::cout << std::endl;

	delete this->_brain;
}

void	Dog::getIdeas(void) const
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Dog:";
	ft_uncolorize();
	std::cout << std::endl;
	for (int i = 0; i < 100 && this->_brain->getIdea(i).length() > 0; i++)
	{
		ft_colorize(reinterpret_cast<uintptr_t>(this));
		std::cout << "Idea "
		<< i
		<< ": "
		<< this->_brain->getIdea(i);
		ft_uncolorize();
		std::cout << std::endl;
	}
}

void	Dog::setIdea(unsigned int i, std::string idea)
{
	this->_brain->setIdea(i, idea);
}

// Other member functions
void	Dog::makeSound(void) const
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << this->_type << " is barking.";
	ft_uncolorize();
	std::cout << std::endl;
}

void	Dog::idBrain(void) const
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Dog's brain: "
	<< this->_brain;
	ft_uncolorize();
	std::cout << std::endl;
}
