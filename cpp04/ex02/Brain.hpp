/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 11:49:26 by scely             #+#    #+#             */
/*   Updated: 2024/06/11 13:37:23 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

#ifndef BRAIN_HPP
#define BRAIN_HPP

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain();
		Brain(Brain& copy);
		Brain(std::string string);
		~Brain();
		Brain& operator=(const Brain& copy);
		void getIdeas();
};


#endif