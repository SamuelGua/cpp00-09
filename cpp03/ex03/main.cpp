/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 18:31:20 by scely             #+#    #+#             */
/*   Updated: 2024/06/06 19:27:58 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

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
		robot.guardGate();
		robot.highFivesGuys();
	}
}