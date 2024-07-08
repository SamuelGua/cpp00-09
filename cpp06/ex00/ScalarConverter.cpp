/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 09:00:28 by scely             #+#    #+#             */
/*   Updated: 2024/07/08 16:56:33 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int stringError(std::string str)
{
    int nad = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (!std::isdigit(str[i]) && !std::isdigit(str[i + 1]) || nad >= 3)
            return (1);
        else if (!std::isdigit(str[i]))
            nad++;
    }
    return (0);
}

int isExeption(std::string str)
{
    if (!str.compare("nan") || !str.compare("nanf"))
    {
        std::cout << "Char:     impossible" << std::endl;
        std::cout << "Int:      impossible" << std::endl;
        std::cout << "Float:    nanf" << std::endl;
        std::cout << "Double:   nan" << std::endl;
        exit (0);
    }
    if (!str.compare("-inf") || !str.compare("+inf")
        || !str.compare("-inff") || !str.compare("+inff"))
    {
        std::cout << "Char:     impossible" << std::endl;
        std::cout << "Int:      impossible" << std::endl;
        std::cout << "Float:    " << (!str.compare(0, 1, "-") ? "-inff\n" : "+inff\n");
        std::cout << "Double:   " << (!str.compare(0, 1, "-") ? "-inf\n" : "+inf\n");
        exit (0);
    }
    if (stringError(str))
        return (1);
    return (0);
}
void ScalarConverter::convert(std::string str)
{
    if (isExeption(str))
    {
        std::cerr << "Error format" << std::endl;
        return ;
    }
    double valeur = std::strtod(str.c_str(), NULL);
    std::cout << "Char:   ";
    if (std::isprint(valeur))
       std::cout << static_cast<char>(valeur) << std::endl;
    else
        std::cout << "Non printable" << std::endl;
    std::cout << "Int:    " << static_cast<int>(valeur) << std::endl;
    std::cout << "Float:  " << valeur << "f" <<std::endl;
    std::cout << "Double: " << static_cast<double>(valeur) << std::endl;
}