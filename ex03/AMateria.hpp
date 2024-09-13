/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 13:08:58 by okraus            #+#    #+#             */
/*   Updated: 2024/09/13 15:30:29 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include "ICharacter.hpp"
# include <iostream>

class ICharacter;

class AMateria
{
	protected:
		std::string _type;
		AMateria*	_nextDrop;
		bool		_fresh;

	public:
		AMateria(std::string const & type);
		AMateria(void);
		AMateria(const AMateria& fix);
		AMateria &operator=(const AMateria& f);
		virtual ~AMateria(void); //this virtual is somehow important
		std::string const &	getType() const; //Returns the materia type
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);  //why?
		void				addDropped(AMateria *dropped);
		bool				getIsFresh(void) const;
		void				unsetFresh(void);
};
#endif