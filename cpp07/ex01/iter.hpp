/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 13:12:09 by marie-evece       #+#    #+#             */
/*   Updated: 2024/07/09 18:47:07 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename T, typename U>
void iter(T *x, size_t length, U func)
{
	if (!x || !length || !func)
	{
		std::cerr << "Error: cannot iter. One parameter is null" << std::endl;
		return ;
	}
	for (size_t i = 0; i < length; i++)
		func(x[i]);
}

#endif