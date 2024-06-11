/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 18:31:20 by scely             #+#    #+#             */
/*   Updated: 2024/06/10 15:47:31 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap   diamond("Pikachu");

    std::cout << std::endl;
    diamond.attack("Kyks");
    diamond.takeDamage(10);
    diamond.beRepaired(5);
    diamond.guardGate();
    diamond.highFivesGuys();
    diamond.whoAmI();
    std::cout << std::endl;
    return (0);
}