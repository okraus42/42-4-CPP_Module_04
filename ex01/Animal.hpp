/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 13:08:58 by okraus            #+#    #+#             */
/*   Updated: 2024/05/12 20:50:29 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal
{
	protected:
		std::string _type;

	public:
		Animal(void);
		Animal(const Animal& fix);
		Animal &operator=(const Animal& f);
		virtual ~Animal(void); //this virtual is somehow important

		const std::string	getType(void) const;

		virtual void	makeSound(void) const;
		virtual void	idBrain(void)	const;
};

#endif