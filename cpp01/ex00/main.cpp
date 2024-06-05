/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 16:21:54 by scely             #+#    #+#             */
/*   Updated: 2024/06/05 09:48:25 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main()
{
	Zombie *mawa;
	randomChump("Marie-eve");
	
	
	mawa = newZombie("Mawa");
	mawa->announce();
	delete mawa;
	return (0);
}