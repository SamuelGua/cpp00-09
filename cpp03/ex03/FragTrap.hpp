/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 18:53:54 by scely             #+#    #+#             */
/*   Updated: 2024/06/10 15:08:38 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	protected:
		FragTrap();
		
	public:
		FragTrap(std::string name);
		FragTrap(FragTrap &copy);
		~FragTrap();
		FragTrap& operator=(const FragTrap &copy);
		void highFivesGuys(void);
};

#endif