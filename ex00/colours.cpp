/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colours.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 15:23:22 by okraus            #+#    #+#             */
/*   Updated: 2024/05/11 15:26:17 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "colours.hpp"

void	ft_colorize(uintptr_t i)
{
	//ESC[38:5:⟨n⟩m FOREGROUND
	//ESC[48:5:⟨n⟩m BACKGROUND
	i %= 997;
	i *= 599;
	i %= 216;
	i += 16;
	std::cout << "\033[1m";
	if ((i - 16) % 36 >= 18)
		std::cout << "\033[38:5:" << 0 << "m";
	else
		std::cout << "\033[38:5:" << 15 << "m";
	std::cout << "\033[48:5:" << i << "m";

	std::cout << i << " ";
}

void	ft_uncolorize(void)
{
	std::cout << "\033[0m";
}