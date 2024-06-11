/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 10:31:16 by scely             #+#    #+#             */
/*   Updated: 2024/06/11 13:38:59 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_HPP
# define Cat_HPP

#include "main.hpp"

class Cat : public Animal
{
	private:
		Brain *ideas;
	public:
		Cat();
		Cat(std::string name);
		Cat(Cat &copy);
		Cat& operator=(const Cat& copy);
		~Cat();
		void makeSound() const;
		void makeIdeas();
};

#endif