/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 13:39:36 by scely             #+#    #+#             */
/*   Updated: 2024/06/02 17:39:42 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

// int main()
// {
// 	std::cout << "=====WEAPON TEST=======" << std::endl;
	
// 	Weapon test = Weapon("salut");

// 	std::cout << "Type of Weapon : " << test.geType() << std::endl;
// 	test.setType("Axe");
// 	std::cout << "Type of Weapon : " << test.geType() << std::endl;

// 	test.geType() = ("Knife");
// 	std::cout << "Type of Weapon : " << test.geType() << std::endl;
// 	std::cout << "=======================" << std::endl;

// }

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
		}
	return 0;
}