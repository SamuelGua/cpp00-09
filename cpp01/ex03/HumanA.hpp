/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 14:09:32 by scely             #+#    #+#             */
/*   Updated: 2024/06/02 17:39:49 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "main.h"

class HumanA
{
	private:
		std::string	name;
		Weapon		&arme;
	public:
		HumanA(std::string name, Weapon &arme);
		~HumanA();
		void attack(void);
};


#endif