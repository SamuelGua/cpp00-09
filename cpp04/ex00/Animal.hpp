/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 15:58:18 by scely             #+#    #+#             */
/*   Updated: 2024/06/11 11:26:55 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

const std::string RESET = "\033[0m";
const std::string RED = "\033[1;31m";
const std::string GREEN = "\033[1;32m";

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(std::string type);
		// ~Animal();
		virtual ~Animal();
		Animal(const Animal& copy);
		Animal& operator=(const Animal& copy);
		std::string getType() const ;
		virtual void makeSound() const ;
};

#endif