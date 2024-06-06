/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 19:31:41 by scely             #+#    #+#             */
/*   Updated: 2024/06/06 19:59:22 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DAIMONDTRAP_HPP
# define DAIMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"


class DiamondTrap : public DiamondTrap, public FragTrap
{
	private:
		/* data */
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		~DiamondTrap();
		DiamondTrap& operator=(FragTrap &copy);
		DiamondTrap(const FragTrap &copy);
		
};

DiamondTrap::DiamondTrap()
{
	this->name = "DiamondTrap";
	this->health_p = FragTrap::health_p;
	this->energy_p = ScavTrap::energy_p;
	this->attack_p = FragTrap::attack_p;
}

DiamondTrap::DiamondTrap(std::string name)
{
	this->name = name + "_clap_name";
	this->health_p = FragTrap::health_p;
	this->energy_p = ScavTrap::energy_p;
	this->attack_p = FragTrap::attack_p;
}

DiamondTrap::~DiamondTrap()
{
}

DiamondTrap& DiamondTrap::operator=(FragTrap &copy)
{
	this->attack_p = copy.attack_p;
	this->energy_p = copy.energy_p;
	this->health_p = copy.health_p;
}

#endif