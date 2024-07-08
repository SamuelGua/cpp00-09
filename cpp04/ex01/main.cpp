/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 10:46:03 by scely             #+#    #+#             */
/*   Updated: 2024/06/17 09:15:29 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main()
{
	{
		std::cout << "==============TEST 1===============" << std::endl;
		Animal *zoo[10];
		for(int i = 0; i < 10; i++)
		{
			if (i < 4)
				zoo[i] = new Cat();
			else
				zoo[i] = new Dog();
		}
		std::cout << zoo[2]->getType() << std::endl;
		zoo[2]->makeSound();
		std::cout << zoo[8]->getType() << std::endl;
		zoo[8]->makeSound();
		for(int i = 0; i < 10; i++)
			delete zoo[i];

	}
	{
		std::cout << "==============TEST 2===============" << std::endl;
		Cat kitty_1("KATY");
		kitty_1.getType();
		kitty_1.makeSound();
		Cat kitty_2(kitty_1);
		kitty_2.getType();
		kitty_2.makeSound();
		kitty_2 = kitty_1;
	}
	{
		std::cout << "==============TEST 3===============" << std::endl;
		Dog Doggy_1("SNOOP");
		Doggy_1.getType();
		Doggy_1.makeSound();
		Dog Doggy_2(Doggy_1);
		Doggy_2.getType();
		Doggy_2.makeSound();
		Doggy_2 = Doggy_1;
	}
	return 0;
}