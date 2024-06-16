/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 00:06:41 by scely             #+#    #+#             */
/*   Updated: 2024/06/15 00:08:32 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef IMateriaSource_HPP
# define IMateriaSource_HPP

#include "main.hpp"

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif