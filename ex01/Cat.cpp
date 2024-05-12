/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 15:30:55 by okraus            #+#    #+#             */
/*   Updated: 2024/05/12 17:04:54 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "colours.hpp"

Cat::Cat(void) : Animal()
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Default constructor of the Cat class called.";
	ft_uncolorize();
	std::cout << std::endl;

	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Copy constructor of the Cat class called.";
	ft_uncolorize();
	std::cout << std::endl;

	*this = copy;
}

Cat	&Cat::operator = (const Cat &src)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Copy assignment of the Cat class called.";
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

Cat::~Cat(void)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Destructor of the Cat class called.";
	ft_uncolorize();
	std::cout << std::endl;
}

void	Cat::getIdeas(void) const
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Cat:";
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

void	Cat::setIdea(unsigned int i, std::string idea)
{
	this->_brain->setIdea(i, idea);
}

// Other member functions
void	Cat::makeSound(void) const
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << this->_type << " is meowing.";
	ft_uncolorize();
	std::cout << std::endl;
}

void	Cat::idBrain(void) const
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Cat's brain: "
	<< this->_brain;
	ft_uncolorize();
	std::cout << std::endl;
}
