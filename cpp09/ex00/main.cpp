/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 14:53:56 by scely             #+#    #+#             */
/*   Updated: 2024/07/13 20:40:44 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <map>
#include <stdlib.h> 
#include <string>

#include <cctype>
#include <cstring>


void split_datacsv(std::string buffer, std::string* tab)
{
    if (!tab[0].empty())
        tab[0].erase();
    if (!tab[1].empty())
        tab[1].erase();
    
    tab[0].append(buffer, 0, 10);
    tab[1].append(buffer, 11, buffer.length() - 11);
}

int main(int ac, char **av)
{
    // cehck si le fichier csv est present 
    if (ac != 2)
    {
        std::cerr << "Error: Wrongs numbers of arguments" << std::endl;
        return (1);
    }
    std::ifstream csv;
    csv.open("data.csv");
    if (!csv.is_open())
    {
        std::cerr << "Error: No {data.csv} file" << std::endl;
        return (1); 
    }
    std::string buffer; 
    std::string split_value[2]; 
    std::map<std::string, float> data;
    std::getline(csv, buffer);
    while (1)
    {
        std::getline(csv, buffer);
        if (buffer.empty())
            break ;
        split_datacsv(buffer, split_value); // split le buffer en deux
        data[split_value[0]] = std::strtof(split_value[1].c_str(), NULL);
    }
    csv.close();   


    std::map<std::string, float>::iterator it = data.begin();
    for (int i = 0; i < 1612; ++i) 
    {
        std::cout.precision(7);
            std::cout << i << "th element: Key = " << it->first << ", Value = " << it->second << std::endl;
            ++it;
    }
    std::cout << split_value[0] << " " << split_value[1] << std::endl;
}