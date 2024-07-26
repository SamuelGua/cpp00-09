/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 17:19:34 by scely             #+#    #+#             */
/*   Updated: 2024/07/26 19:43:22 by scely            ###   ########.fr       */
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
        // test.print();
        test.sorting();
        std::cout << "============\n";
        // test.print();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return ac;
}