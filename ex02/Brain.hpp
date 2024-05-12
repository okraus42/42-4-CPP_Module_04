/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 13:08:58 by okraus            #+#    #+#             */
/*   Updated: 2024/05/12 17:01:16 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class Brain
{
	protected:
		std::string _ideas[100];

	public:
		Brain(void);
		Brain(const Brain& fix);
		Brain &operator=(const Brain& f);
		virtual ~Brain(void); //this virtual is somehow important

		const std::string	getIdea(unsigned int i) const;
		void				setIdea(unsigned int i, std::string idea);

};

#endif