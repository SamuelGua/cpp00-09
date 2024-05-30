/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 14:38:38 by scely             #+#    #+#             */
/*   Updated: 2024/05/30 16:06:56 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

char *do_up(char *str)
{
	for (int i = 0; str[i]; i++)
		if (std::islower(str[i]))
			str[i] -= 32;
	return (str); 
}

int main(int ac, char *av[])
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; i < ac; i++)
			std::cout << do_up(av[i]);
	}
	std::cout << std::endl;
	return (0);
}