/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 15:01:08 by scely             #+#    #+#             */
/*   Updated: 2024/07/26 23:40:55 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_HPP
#define BITCOIN_HPP

#include <string>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <map>

class BitcoinExchange
{
    private:
        std::map<std::string, int> _dataCsv;
        BitcoinExchange();
    public:
        BitcoinExchange(std::string dataCsv);
        BitcoinExchange(const BitcoinExchange& copy);
        BitcoinExchange& operator=(const BitcoinExchange& obj);
        ~BitcoinExchange();
        
        void convert(std::string dataBase);
};

BitcoinExchange::BitcoinExchange(std::string dataCsv)
{
    if (dataCsv.empty())
        throw std::logic_error("Exception: No data file");
    size_t pos = (dataCsv.size() < 4 ? 0 : dataCsv.size() - 4);
    if (dataCsv.compare(pos, 4, ".csv"))
        throw std::logic_error("Execption: No csv file :" + dataCsv);
    std::fstream fs;
    fs.open(dataCsv.c_str(), std::fstream::in);
    if (!fs.is_open())
        throw std::logic_error("Execption: Cannot open file :" + dataCsv);
    for (std::string line; std::getline(fs, line);)
    {
        std::string date;
        date.insert(0, line, 0, line.find_first_of(","));
        std::string value;
        value.insert(0, line, line.find_first_of(",") + 1, line.size());
        this->_dataCsv[date] =  std::strtod(value.c_str(), NULL);
    }
    // std::cout << this->_dataCsv.size() << std::endl;
    // std::map<std::string, int>::iterator it = _dataCsv.begin(); 
    // std::cout << "Clé du premier élément: " << it->first << std::endl;
    // std::cout << "Valeur du premier élément: " << it->second << std::endl; 
    // ++it;
    // std::cout << "Clé du premier élément: " << it->first << std::endl;
    // std::cout << "Valeur du premier élément: " << it->second << std::endl; 
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& obj)
{
    if (this != &obj)
        this->_dataCsv = obj._dataCsv;
    return (*this);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& copy)
{
        this->_dataCsv = copy._dataCsv;
}


BitcoinExchange::~BitcoinExchange()
{
}

void BitcoinExchange::convert(std::string dataBase)
{
    if (dataBase.empty())
        throw std::logic_error("Exception: No database file");
    std::fstream fs;
    fs.open(dataBase.c_str(), std::fstream::in);
    if (!fs.is_open())
        throw std::logic_error("Execption: Cannot open file :" + dataBase);
    //check-format
    
}

#endif