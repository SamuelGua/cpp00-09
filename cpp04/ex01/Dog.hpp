/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 10:31:16 by scely             #+#    #+#             */
/*   Updated: 2024/06/11 12:05:49 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "main.hpp"

class Dog : public Animal
{
	private:
		Brain *ideas;
	public:
		Dog();
		Dog(std::string name);
		Dog(Dog &copy);
		Dog& operator=(const Dog& copy);
		~Dog();
		void makeSound() const;
};

#endif