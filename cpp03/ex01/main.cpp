/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 18:31:20 by scely             #+#    #+#             */
/*   Updated: 2024/06/10 15:36:27 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	{
		ClapTrap    a("Arnaud");
		a.takeDamage(10);
		a.beRepaired(5);
		a.attack("Claire");
	}
    std::cout << std::endl;
    std::cout << std::endl;
	{
		ScavTrap    c("Matteo");
		c.beRepaired(5);
		for (int i = 0; i < 3; i++)
			c.attack("the whole world");
		c.beRepaired(5);
		c.guardGate();
		c.beRepaired(10);
	}
	return (0);
}