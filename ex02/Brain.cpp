/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 15:30:55 by okraus            #+#    #+#             */
/*   Updated: 2024/05/11 15:37:59 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "colours.hpp"

Brain::Brain(void)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Default constructor of the Brain class called.";
	ft_uncolorize();
	std::cout << std::endl;
}

Brain::Brain(const Brain& copy)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Copy constructor of the Brain class called.";
	ft_uncolorize();
	std::cout << std::endl;

	*this = copy;
}

Brain	&Brain::operator = (const Brain &src)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Copy assignment of the Brain class called.";
	ft_uncolorize();
	std::cout << std::endl;

	if (this == &src)
		return (*this);
	for (int i = 0; i < 100; i++)
	{
		if (src._ideas[i].length() > 0)
			this->_ideas[i] = src._ideas[i];
	}
	return (*this);
}

Brain::~Brain(void)
{
	ft_colorize(reinterpret_cast<uintptr_t>(this));
	std::cout << "Destructor of the Brain class called.";
	ft_uncolorize();
	std::cout << std::endl;
}

// Getters
const std::string	Brain::getIdea(unsigned int i) const
{
	if (i < 100)
	{
		ft_colorize(reinterpret_cast<uintptr_t>(this));
		std::cout << " [[getting idea]] ";
		ft_uncolorize();
		// std::endl;
		return (this->_ideas[i]);
	}
	else
	{
		ft_colorize(reinterpret_cast<uintptr_t>(this));
		std::cout << " [[Cannot get idea, out of range]] ";
		ft_uncolorize();
		std::cout << std::endl;
		return (NULL);
	}
}

// Setters
void	Brain::setIdea(unsigned int i, std::string idea)
{
	if (i < 100)
	{
		ft_colorize(reinterpret_cast<uintptr_t>(this));
		std::cout << " [[setting idea]] ";
		ft_uncolorize();
		// std::endl;
		this->_ideas[i] = idea;
	}
	else
	{
		ft_colorize(reinterpret_cast<uintptr_t>(this));
		std::cout << " [[Cannot set idea, out of range]] ";
		ft_uncolorize();
		std::cout << std::endl;
	}
}
