/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 14:09:32 by scely             #+#    #+#             */
/*   Updated: 2024/06/02 17:41:05 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "main.h"

class HumanB
{
	private:
		std::string	name;
		Weapon		*arme;
	public:
		HumanB(std::string name);
		~HumanB();
		void setWeapon(Weapon &arme);
		void attack(void);
};

#endif