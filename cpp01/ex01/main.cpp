/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 09:13:48 by scely             #+#    #+#             */
/*   Updated: 2024/06/02 10:55:17 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main(int ac, char *av[])
{
	int n_zombie;
	
	if (ac != 2)
		return (std::cout << "Numbers of inputs" << std::endl, 1);

	n_zombie = std::atoi(av[1]);
	for (int i = 0; av[1][i]; i++)
	{
		if (!std::isdigit(av[1][i]))
		{
			std::cout << "Only numbers are accepted" << std::endl;
			return (1);
		}
	}
	// if ((n_zombie < 0 || n_zombie > USHRT_MAX))
	if ((n_zombie < 0 || n_zombie > INT_MAX))
	{
		std::cout << "Not a positive numbers" << std::endl;
		return (1);
	};
	Zombie *horde = zombieHorde(n_zombie, "la miff");
	for(int i = 0;  i < n_zombie; i++)
	{
		std::cout << "["<< i << "] :";
		horde[i].announce();
	}
	delete [] horde;
	return (0);
}