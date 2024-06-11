/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 18:31:20 by scely             #+#    #+#             */
/*   Updated: 2024/06/10 15:32:56 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


int main()
{
	{
		ClapTrap    a("Jack");

		a.attack("Dilara");
		a.takeDamage(10);
		a.takeDamage(10);
		a.beRepaired(5);
		a.attack("Jean");
	}
	{
		std::cout << std::endl;
		ClapTrap    b("Marie");
		b.beRepaired(3);
		b.attack("Dilara");
		b.attack("Jean");
		b.attack("Jean");
		b.beRepaired(3);
	}
}