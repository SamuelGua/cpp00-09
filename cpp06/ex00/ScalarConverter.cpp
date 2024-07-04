/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 09:00:28 by scely             #+#    #+#             */
/*   Updated: 2024/07/03 10:44:01 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int stringError(std::string str)
{
    int nad = 0;
    for (int i; i < str.length(); i++)
    {
        if (!std::isdigit(str[i]) && std::isdigit(str[i + 1]) || nad >= 3)
            return (1);
        else if (!std::isdigit(str[i]))
            nad++;
    }
}

int isExeption(std::string str)
{
    if (!str.compare("nan") || !str.compare("nanf"))
    {
        /* do something */    
    }
    if (!str.compare("-inf") || !str.compare("+inf")
        || !str.compare("-inff") || !str.compare("+inff"))
    {
        /* do something */    
    }
    if (stringError(str))
        return (1);
}

int conversion(std::string str)
{
    if (isExeption(str))
    {
        std::cerr << "Error format" << std::endl;
        return (1);
    }
    char *endptr;
    double valeur = std::strtod(str.c_str(), &endptr);
    std::cout << "Char:   " << (std::isprint(valeur) ? static_cast<char>(valeur) : (char)("Non printable")) << std::endl;
    std::cout << "Int:    " << static_cast<int>(valeur) << std::endl;
    std::cout << "Float:  " << valeur << "f" <<std::endl;
    std::cout << "Double: " << static_cast<double>(valeur) << std::endl;
    
}