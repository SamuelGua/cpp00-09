/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 09:00:28 by scely             #+#    #+#             */
/*   Updated: 2024/07/09 18:35:28 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::~ScalarConverter()
{ 
}

#define ERROR 0
#define INT 1
#define CHAR 2
#define DECIMAL 3

int checkFormat(std::string str)
{
    bool flag_point = false;
    bool flag_f = false;
    if (str.empty())
        return (ERROR);
    else if (str.length() == 1 && std::isprint(str[0]) && !std::isdigit(str[0]))
        return (CHAR);
    for (size_t i = 0; i < str.length(); i++)
    {
        if (i == 0 && (str[i] == '-' || str[i] == '+'))
            i++;
        if (str[i] == '.' && !flag_point)
            flag_point = true;
        else if (str[i] == '.' && flag_point)
            return (ERROR);
       
        if ((str[i] == 'f' || str[i] == 'F') && !flag_f && flag_point)
            flag_f = true;
        else if ((str[i] == 'f' || str[i] == 'F') && (flag_f || !flag_point))
            return (ERROR);

        if (!std::isdigit(str[i]) && str[i] != '.' && (str[i] != 'F' && str[i] != 'f'))
            return (ERROR);
    }
    if (flag_point && !(std::strtod(str.c_str(), NULL) == static_cast<int>((std::strtod(str.c_str(), NULL)))))
        return (DECIMAL);
    return (INT);
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
    return (checkFormat(str));
}

void cast_char(std::string str)
{
    std::cout << "Char:   ";
    if (std::isprint(str[0]))
       std::cout << str[0] << std::endl;
    else
        std::cout << "Non printable" << std::endl;
    std::cout << "Int:    " << static_cast<int>(str[0]) << std::endl;
    std::cout << "Float:  " << static_cast<float>(str[0]) << ".0f" <<std::endl;
    std::cout << "Double: " << static_cast<double>(str[0]) << ".0" << std::endl;
}

void cast_int(std::string str)
{
    double valeur = std::strtod(str.c_str(), NULL);
    std::cout << valeur << std::endl;
    std::cout << "Char:   ";
    if ((valeur > 32 && valeur < CHAR_MAX) && std::isprint(valeur))
       std::cout << static_cast<char>(valeur) << std::endl;
    else
        std::cout << "Non printable" << std::endl;
    std::cout << "Int:    ";
    if (str.length() > 12 || (INT_MAX < valeur || INT_MIN > valeur)) 
        std::cout << "impossible" << std::endl;
    else
        std::cout << static_cast<int>(valeur) << std::endl;
    std::cout << "Float:  " << static_cast<float>(valeur) << ".0f" <<std::endl;
    std::cout << "Double: " << static_cast<double>(valeur) << ".0" << std::endl;
}

void cast_decimal(std::string str)
{
    double valeur = std::strtod(str.c_str(), NULL);
    std::cout << "Char:   ";
    if ((valeur > 32 && valeur < CHAR_MAX) && std::isprint(valeur))
       std::cout << static_cast<char>(valeur) << std::endl;
    else
        std::cout << "Non printable" << std::endl;
    std::cout.precision(18);
    std::cout << "Int:    ";
    if (str.length() > 12 || (INT_MAX < valeur || INT_MIN > valeur)) 
        std::cout << "impossible" << std::endl;
    else
        std::cout << static_cast<int>(valeur) << std::endl;
    std::cout << "Float:  " <<  std::atof(str.c_str()) << "f" <<std::endl;
    std::cout << "Double: " << static_cast<double>(valeur) << std::endl;
}


void ScalarConverter::convert(std::string str)
{
    switch (isExeption(str))
    {
        case CHAR:
            cast_char(str);
        break;
        
        case INT:
            cast_int(str);
        break;
        
        case DECIMAL:
            cast_decimal(str);
        break;

        default:
            std::cerr << "Error format" << std::endl;
        break;
    }

}