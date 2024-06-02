/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 09:28:53 by scely             #+#    #+#             */
/*   Updated: 2024/06/02 11:25:01 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie *zombieHorde( int n, std::string name)
{
	Zombie *horde;
	try
	{
		horde = new Zombie[n];
	} 
	catch (const std::bad_alloc &e) 
	{
		std::cerr << "Erreur: Échec de l'allocation de mémoire: " << e.what() << std::endl;
		exit (1);
	}
	for (int i = 0; i < n; i++)
		horde[i].setname(name);
	return (horde);
}
