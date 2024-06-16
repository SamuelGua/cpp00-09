/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 10:58:12 by scely             #+#    #+#             */
/*   Updated: 2024/06/16 11:53:46 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

#ifndef MATERIASOURCE
#	define MATERIASOURCE

class MateriaSource : public IMateriaSource
{
	private:
		std::string name;
		AMateria *materias[4];
	public:
		MateriaSource();
		MateriaSource(std::string name);
		MateriaSource(const MateriaSource& copy);
		~MateriaSource();

		MateriaSource& operator=(const MateriaSource& copy);

		void learnMateria(AMateria* type);
		AMateria* createMateria(std::string const & type);
};

#endif