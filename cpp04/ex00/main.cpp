/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 10:46:03 by scely             #+#    #+#             */
/*   Updated: 2024/06/11 11:44:54 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		std::cout << "==================================" << std::endl;
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		j->makeSound();
		meta->makeSound();
		delete i;
		delete j;
		delete meta;
	}
	{
		std::cout << "==================================" << std::endl;
		Animal meta;
		Dog j;
		Cat i;
		std::cout << j.getType() << " " << std::endl;
		std::cout << i.getType() << " " << std::endl;
		i.makeSound();
		j.makeSound();
		meta.makeSound();

	}
	{
		std::cout << "==================================" << std::endl;
		const WrongAnimal* meta = new WrongCat();
		std::cout << meta->getType() << " " << std::endl;
		meta->makeSound();
		delete meta;
	}
	return 0;
}