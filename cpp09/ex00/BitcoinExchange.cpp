/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 10:18:20 by scely             #+#    #+#             */
/*   Updated: 2024/07/27 12:07:32 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

/**************************************************************************************/
/*                              Constructeur et destructeur                           */
/**************************************************************************************/

BitcoinExchange::BitcoinExchange()
{
    // if (dataCsv.empty())
    //     throw std::logic_error("Exception: No data file");
    // size_t pos = (dataCsv.size() < 4 ? 0 : dataCsv.size() - 4);
    // if (dataCsv.compare(pos, 4, ".csv"))
    //     throw std::logic_error("Execption: Wrongs extension (only .csv) :" + dataCsv);
    std::fstream fs;
    fs.open("data.csv", std::fstream::in);
    if (!fs.is_open())
        throw std::logic_error("Execption: Cannot open file : data.csv");
    for (std::string line; std::getline(fs, line);)
    {
        std::string date;
        date.insert(0, line, 0, line.find_first_of(","));
        std::string exchange_rate;
        exchange_rate.insert(0, line, line.find_first_of(",") + 1, line.size());
        this->_dataCsv[date] =  std::strtod(exchange_rate.c_str(), NULL);
    }
    // std::cout << this->_dataCsv.size() << std::endl;
    // std::map<std::string, int>::iterator it = _dataCsv.begin(); 
    // std::cout << "Clé du premier élément: " << it->first << std::endl;
    // std::cout << "Valeur du premier élément: " << it->second << std::endl; 
    // ++it;
    // std::cout << "Clé du premier élément: " << it->first << std::endl;
    // std::cout << "Valeur du premier élément: " << it->second << std::endl; 
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& copy)
{
        this->_dataCsv = copy._dataCsv;
}


BitcoinExchange::~BitcoinExchange()
{
}

/**************************************************************************************/
/*                              Surcharge d'operateur                                 */
/**************************************************************************************/

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& obj)
{
    if (this != &obj)
        this->_dataCsv = obj._dataCsv;
    return (*this);
}

/**************************************************************************************/
/*                                      Methodes                                      */
/**************************************************************************************/

bool checkLine(std::string line)
{
    if (line.empty())
        return (false);
    if (line.find_first_of("|") != 11 || line[line.find_first_of("|") - 1] != 32)
        return (false);
    return (true);
}

// bool checkDate(std::string value)
// {
    
// }

bool checkValue(std::string value)
{
    if (value.empty())
    {
        std::cerr << "Format value error: none value" << std::endl;
        return (false);
    }
    char* endptr;
    double dValue = std::strtod(value.c_str(), &endptr);
    if (*endptr != '\0')
    {
        std::cerr << "Format value error: incorrect input " + value << std::endl;
        return (false);
    }
    if (dValue < 0)
    {
        std::cerr << "Format value error: not a positive number " + value << std::endl;
        return (false);
    }
    else if (dValue > 1000)
    {
        std::cerr << "Format value error: too large number " + value << std::endl;
        return (false);
    }
    return (true);
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
    std::string line;
    std::getline(fs, line);
    for (;std::getline(fs, line);)
    {
        // check line
        // execption it's not a "date | value" format
        if (!checkLine(line))
        {
            std::cerr << "Error: the format must be 'date | value' => " + line << std::endl;
            continue;   
        }
        std::string date;
        date.insert(0, line, 0, line.find_first_of("|"));
        date.erase(date.end() - 1);
        // format date
        std::string value;
        value.insert(0, line, line.find_first_of("|") + 1, line.size());
        if (*(value.end() - 1) == ' ')
            value.erase(value.begin());
        if (!checkValue(value))
            continue;
        std::cout << date + " -> " + value << std::endl;
        //calcule
        // date == map[date] ? 1 : 0
        // premiere date et derniere date
        // compare
    }
    
}