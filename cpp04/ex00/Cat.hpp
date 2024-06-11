/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 10:31:16 by scely             #+#    #+#             */
/*   Updated: 2024/06/11 11:21:46 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_HPP
# define Cat_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	private:
		
	public:
		Cat();
		Cat(std::string name);
		Cat(Cat &copy);
		Cat& operator=(const Cat& copy);
		~Cat();
		void makeSound() const;
};

#endif