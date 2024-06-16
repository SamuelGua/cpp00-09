/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 15:48:51 by scely             #+#    #+#             */
/*   Updated: 2024/06/16 11:51:28 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include "main.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string type;
	public:
		AMateria();
		AMateria(AMateria &copy);
		AMateria(std::string const & type);
		~AMateria();

		AMateria& operator=(const AMateria &obj);

		std::string const &getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif