/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 10:31:16 by scely             #+#    #+#             */
/*   Updated: 2024/06/11 11:20:33 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	private:
		
	public:
		Dog();
		Dog(std::string name);
		Dog(Dog &copy);
		Dog& operator=(const Dog& copy);
		~Dog();
		void makeSound() const;
};

#endif