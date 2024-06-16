/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 19:31:04 by scely             #+#    #+#             */
/*   Updated: 2024/06/14 19:45:59 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARATER_HPP
# define CHARATER_HPP

#include "main.hpp"

class Character : public ICharacter
{
	private:
		std::string name;
		AMateria *materias[4];
	public:
		Character();
		Character(Character& copy);
		Character(std::string name);
		~Character();
		Character& operator=(const Character& obj);

		std::string const &getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif