/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:20:15 by scely             #+#    #+#             */
/*   Updated: 2024/07/11 14:56:00 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <string>
#include <algorithm>

template<class T>
typename T::iterator easyfind(T &tab, int number)
{
	typename T::iterator it = std::find(tab.begin(), tab.end(), number);
	if (it != tab.end())
		return (it);
	throw std::logic_error("Exception: (easyfind): No occurence find");
}

// template<class T>
// int  test<T>::easyfind(T &tab, float number)
// {
// 	typename T::iterator it = std::find(tab.begin(), tab.end(), number);
// 	if (it != tab.end())
// 		return (*it);
// 	throw std::logic_error("Exception: (easyfind): No occurence find");
// }

#endif