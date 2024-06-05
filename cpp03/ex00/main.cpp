/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 18:31:20 by scely             #+#    #+#             */
/*   Updated: 2024/06/05 19:10:00 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

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

}