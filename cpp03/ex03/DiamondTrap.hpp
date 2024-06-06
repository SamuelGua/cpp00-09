/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 19:31:41 by scely             #+#    #+#             */
/*   Updated: 2024/06/06 23:26:07 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DAIMONDTRAP_HPP
# define DAIMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"


class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string name;
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		~DiamondTrap();
		DiamondTrap& operator=(const DiamondTrap &copy);
		DiamondTrap(const DiamondTrap &copy);
		void whoAmI();
};




#endif