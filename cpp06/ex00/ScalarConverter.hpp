/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 09:00:28 by scely             #+#    #+#             */
/*   Updated: 2024/07/03 10:26:27 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERT_HPP
#define SCALARCONVERT_HPP

#include <string>
#include <iostream>
#include <cstdlib> 

class ScalarConverter
{
private:
    ScalarConverter();
    ~ScalarConverter();    
public:
    static void convert(std::string str); 
};

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::~ScalarConverter()
{
}
void ScalarConverter::convert(std::string str)
{
    
}

#endif