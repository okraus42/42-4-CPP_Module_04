/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 13:08:58 by okraus            #+#    #+#             */
/*   Updated: 2024/05/12 20:30:07 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef AANIMAL_HPP
# define AANIMAL_HPP
# include <iostream>

class AAnimal
{
	protected:
		std::string _type;

	public:
		AAnimal(void);
		AAnimal(const AAnimal& fix);
		AAnimal &operator=(const AAnimal& f);
		virtual ~AAnimal(void); //this virtual is somehow important

		const std::string	getType(void) const;

		virtual void	makeSound(void) const = 0;
		virtual void	idBrain(void)	const = 0;
};

#endif