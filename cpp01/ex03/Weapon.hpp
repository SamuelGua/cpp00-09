/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 13:38:24 by scely             #+#    #+#             */
/*   Updated: 2024/06/02 15:13:22 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

class Weapon
{
	private:
		std::string type;
	public:
		Weapon();
		Weapon(std::string type);
		~Weapon();
		std::string &geType();
		void setType( std::string type);
};


#endif