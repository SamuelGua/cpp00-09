/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 09:28:53 by scely             #+#    #+#             */
/*   Updated: 2024/06/18 18:20:00 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie *zombieHorde( int n, std::string name)
{
	Zombie *horde;

	horde = new(std::nothrow) Zombie[n];
	if (horde == NULL)
	{
		std::cerr << "Erreur: Échec de l'allocation de mémoire" << std::endl;
		exit (1);
	}
	for (int i = 0; i < n; i++)
		horde[i].setname(name);
	return (horde);
}
