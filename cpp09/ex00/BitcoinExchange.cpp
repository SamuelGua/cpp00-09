/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marie-evecely <marie-evecely@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 10:18:20 by scely             #+#    #+#             */
/*   Updated: 2024/07/28 20:47:27 by marie-evece      ###   ########.fr       */
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

bool checkDate(std::string value)
{
    if (value.size() != 10 || std::count(value.begin(), value.end(), '-') != 2)
    {
        std::cerr << "Error: Wrong format => " << value << std::endl;
        return (false);
    }

    int year = std::atoi(value.substr(0, 4).c_str());
    int month = std::atoi(value.substr(5, 2).c_str());
    int day = std::atoi(value.substr(8, 2).c_str());

    if (year <= 0)
    {
        std::cerr << RED "Error: Wrong year => " << value << RESET << std::endl;
        return (false);
    }
    if (month <= 0 || month > 12)
    {
        std::cerr << RED "Error: Wrong month => " << value << RESET << std::endl;
        return (false);
    }
    bool leapYear = (year % 400) || (year % 4 == 0 && year % 100 != 0);

    if (month <= 0 || month > 12)
    {
        std::cerr << RED "Error: Wrong month => " << value << RESET << std::endl;
        return false;
    }
    switch (month % 2)
    {
        case 0:
            if (day != 31)
            {
                std::cerr << RED "Error:1 Wrong day => " << value << RESET << std::endl;
                return (false);
            }
        case 1:
            if (month == 7 && day > 31)
            {
                std::cerr << RED "Error:2 Wrong day => " << value << RESET << std::endl;
                return false;
            }
            if (month == 2 && leapYear && day > 29)
            {
                std::cerr << RED "Error:3 Wrong day => " << value << RESET << std::endl;
                return false;
            }
            else if (month == 2 && !leapYear && day > 28)
            {
                std::cerr << RED "Error:4 Wrong day => " << value << RESET << std::endl;
                return false;
            }
            break;
        default:
            break;
    }
    return (true);
}

bool checkValue(std::string value)
{
    if (value.empty())
    {
        std::cerr << RED "Error: None value" RESET << std::endl;
        return (false);
    }
    char* endptr;
    double dValue = std::strtod(value.c_str(), &endptr);
    if (*endptr != '\0')
    {
        std::cerr << RED "Error: Incorrect input =>" + value << RESET<< std::endl;
        return (false);
    }
    if (dValue < 0)
    {
        std::cerr << RED "Error: Not a positive number =>" + value << RESET << std::endl;
        return (false);
    }
    else if (dValue > 1000)
    {
        std::cerr << RED "Error: Too large number =>" + value << RESET << std::endl;
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
    std::string line;
    std::getline(fs, line);
    for (;std::getline(fs, line);)
    {
        if (!checkLine(line))
        {
            std::cerr << RED "Error: The format must be 'date | value' => " + line << RESET<< std::endl;
            continue;   
        }
        std::string date;
        date.insert(0, line, 0, line.find_first_of("|"));
        date.erase(date.end() - 1);
        if (!checkDate(date))
            continue;
        
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