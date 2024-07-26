/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 17:19:34 by scely             #+#    #+#             */
/*   Updated: 2024/07/26 20:12:11 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char *av[])
{
    //check si c'est empty
    if (ac == 1)
    {
        std::cout << "Error: Need at least one argument" << std::endl;
        return (1);
    } 
    try
    {
        PmergeMe test(ac, av);
        test.sorting();
        std::cout << "============\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return ac;
}