/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 13:11:01 by marie-evece       #+#    #+#             */
/*   Updated: 2024/07/09 23:01:36 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template< typename T>
T plusOne(T& i)
{
	i -= 32;
	return (0);
}

int main()
{
	char s[7] = "samuel";
	iter(s, 6, plusOne<char>);
	for (size_t i = 0; i < 6; i++)
	{
		std::cout << s[i];
	}
	
	return 0;
}