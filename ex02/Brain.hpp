/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 13:08:58 by okraus            #+#    #+#             */
/*   Updated: 2024/09/13 18:10:21 by okraus           ###   ########.fr       */
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
		~Brain(void);

		const std::string	getIdea(unsigned int i) const;
		void				setIdea(unsigned int i, std::string idea);

};

#endif