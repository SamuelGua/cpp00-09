/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 12:39:56 by marie-evece       #+#    #+#             */
/*   Updated: 2024/07/08 14:07:49 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_HPP
#define TEMPLATES_HPP

template <typename T>
void swap(T& x, T& y)
{
	T tmp = y;
	y = x;
	x = tmp;
}

template <typename T>
T min(T x, T y)
{
	return (x < y ? x : y);
}

template <typename T>
T max(T x, T y)
{
	return (x > y ? x : y);
}

#endif