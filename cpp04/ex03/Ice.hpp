/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 16:10:56 by scely             #+#    #+#             */
/*   Updated: 2024/06/16 10:49:32 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "main.hpp"

class Ice : public AMateria
{
	private:
	
	public:
		Ice();
		Ice(std::string name);
		Ice(const Ice& copy);
		~Ice();
		Ice& operator=(const Ice& copy);

		AMateria* clone() const;
		void use(ICharacter& target);

		
};

#endif