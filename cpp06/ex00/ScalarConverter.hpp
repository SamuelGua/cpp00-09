/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 09:00:28 by scely             #+#    #+#             */
/*   Updated: 2024/07/09 22:23:31 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERT_HPP
#define SCALARCONVERT_HPP

#include <string>
#include <iostream>
#include <stdlib.h> 
#include <limits.h> 

class ScalarConverter
{
    private:
        ScalarConverter();
        ScalarConverter& operator=(const ScalarConverter &copy);
        ScalarConverter(const ScalarConverter &copy);
    public:
        ~ScalarConverter();
        

        static void convert(std::string str); 
};



#endif