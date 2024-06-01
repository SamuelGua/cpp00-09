/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 16:21:51 by scely             #+#    #+#             */
/*   Updated: 2024/06/01 17:08:09 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie *newZombie(std::string name)
{
	Zombie *new_zombie;
	
	new_zombie = new Zombie;
	new_zombie->set_name(name);

	return (new_zombie);
}