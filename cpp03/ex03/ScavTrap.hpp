/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 19:18:29 by scely             #+#    #+#             */
/*   Updated: 2024/06/10 15:08:19 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	protected:
		ScavTrap();

	public:
		ScavTrap(std::string name);
		ScavTrap(ScavTrap &copy);
		ScavTrap &operator=(const ScavTrap &copy);
		~ScavTrap();
		void guardGate();
		int getEnergy();
};


#endif