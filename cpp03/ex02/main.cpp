/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 18:31:20 by scely             #+#    #+#             */
/*   Updated: 2024/06/10 15:40:30 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	{
		ClapTrap    clap("Clap");


		clap.attack("Scav");
		clap.takeDamage(10);
		clap.beRepaired(5);
	}
    std::cout << std::endl;
	{
		ScavTrap    scav("Scav");
		scav.attack("Frag");
		scav.takeDamage(10);
		scav.beRepaired(5);
		scav.guardGate();
	}
    std::cout << std::endl;
	{
		FragTrap    frag("Frag");
		frag.attack("Clap");
		frag.takeDamage(10);
		frag.beRepaired(5);
		frag.highFivesGuys();
	}
    return (0);
}