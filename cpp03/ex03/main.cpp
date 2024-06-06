/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 18:31:20 by scely             #+#    #+#             */
/*   Updated: 2024/06/06 23:32:28 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	{
		ClapTrap robot("Jack");

		robot.attack("Dilara");
		for (int i = 0; i < 4; i++)
			robot.beRepaired(5);
		for (int i = 0; i < 4; i++)
			robot.beRepaired(5);
	}
	{
		ScavTrap robot("Jack");
		robot.attack("Sidy");
		robot.guardGate();
	}
	{
		FragTrap robot("Jack");
		robot.attack("Kylian");
		robot.highFivesGuys();
	}
	{
		DiamondTrap robot("Jack");
		robot.attack("RedHair");
		robot.highFivesGuys();
		robot.guardGate();
		robot.takeDamage(15);
		robot.beRepaired(12);
		robot.whoAmI();
	}
}