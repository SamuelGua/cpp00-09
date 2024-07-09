/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 13:39:04 by scely             #+#    #+#             */
/*   Updated: 2024/07/09 13:39:05 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>
#include "data.h"

int main()
{
    {
        Data obj = {0, 'S'};

        std::cout << "Original Data:" << std::endl;
        std::cout << "Address: " << &obj << ", Value: " << " char: " << obj.c << " int: " << obj.i << std::endl;

        obj = *Serializer::deserialize(Serializer::serialize(&obj));

        std::cout << "Deserialized Data after a serialize:" << std::endl;
        std::cout << "Address: " << &obj << ", Value: " << " char: " << obj.c << " int: " << obj.i << std::endl;
    }

    return 0;
}
