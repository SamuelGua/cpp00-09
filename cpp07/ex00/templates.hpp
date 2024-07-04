/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marie-evecely <marie-evecely@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 12:39:56 by marie-evece       #+#    #+#             */
/*   Updated: 2024/07/04 13:05:39 by marie-evece      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_HPP
#define TEMPLATES_HPP

template <typename T> void swap(T& x, T& y)
{
	T tmp = y;
	y = x;
	x = tmp;
}

template <typename T> T min(T x, T y)
{
	return (x < y ? x : y);
}

template <typename T> T max(T x, T y)
{
	return (x > y ? x : y);
}

#endif