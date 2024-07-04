/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marie-evecely <marie-evecely@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 13:12:09 by marie-evece       #+#    #+#             */
/*   Updated: 2024/07/04 14:16:24 by marie-evece      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename T, typename U>
void iter(T *x, size_t length, U func)
{
	size_t i = 0;
	if (!x || !length || !func)
	{
		std::cerr << "Error: cannot iter. One parameter is null" << std::endl;
		return ;
	}
	while (i < length)
	{
		x[i] = func(x[i]);
		i++;
	}	
}

#endif