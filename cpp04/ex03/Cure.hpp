/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 16:10:56 by scely             #+#    #+#             */
/*   Updated: 2024/06/16 11:40:10 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "main.hpp"

class Cure : public AMateria
{
	private:
	
	public:
		Cure();
		Cure(std::string name);
		Cure(const Cure& copy);
		~Cure();
		Cure& operator=(const Cure& copy);

		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif