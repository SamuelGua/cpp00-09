/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 16:21:54 by scely             #+#    #+#             */
/*   Updated: 2024/06/04 22:33:55 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main()
{
	randomChump("Marie-eve");
	randomChump("Milane");
	
	
	Zombie *sherine;
	Zombie *mawa;
	sherine = newZombie("sherine");
	mawa = newZombie("Mawa");
	sherine->announce();
	mawa->announce();
	delete sherine;
	delete mawa;
	return (0);
}