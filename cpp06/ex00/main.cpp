/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 08:20:09 by scely             #+#    #+#             */
/*   Updated: 2024/07/06 09:08:02 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char *av[])
{
    if (ac != 2)
    {
        std::cerr << "Error: Wrongs arguments numbers" << std::endl;
        return (1);
    }
    std::string str = av[1];
    ScalarConverter::convert(str);
}
