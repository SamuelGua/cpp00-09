/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marie-evecely <marie-evecely@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 13:11:01 by marie-evece       #+#    #+#             */
/*   Updated: 2024/07/04 14:19:21 by marie-evece      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
T plusOne(T i)
{
	return (i - 32); 
}

int main()
{
	char s[7] = "samuel";
	iter(s, 6, plusOne<char>);
	for (size_t i = 0; i < 6; i++)
	{
		std::cout << s[i] << std::endl;
	}
	
	return 0;
}