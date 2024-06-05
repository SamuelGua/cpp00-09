/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 13:39:36 by scely             #+#    #+#             */
/*   Updated: 2024/06/05 09:51:37 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

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
		std::cout << "================================" << std::endl;
		Weapon club = Weapon("crude spiked club");
		
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	{
		std::cout << "================================" << std::endl;
	    Weapon *club = new Weapon("bat");
        HumanB *jim = new HumanB("Jean");
        jim->setWeapon(*club);
        jim->attack();
        delete club;
        Weapon *arm = NULL;
        jim->setWeapon(*arm);
        jim->attack();
        Weapon newWeap("gun");
        jim->setWeapon(newWeap);
        jim->attack();
        delete jim;
    }
	return 0;
}