/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 10:18:20 by scely             #+#    #+#             */
/*   Updated: 2024/07/28 22:17:17 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

/**************************************************************************************/
/*                              Constructeur et destructeur                           */
/**************************************************************************************/

BitcoinExchange::BitcoinExchange()
{
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
    fs.close();
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

bool checkLine(std::string& line)
{
    if (line.empty())
        return (false);
    if (line.find_first_of("|") != 11 || line[line.find_first_of("|") - 1] != 32)
        return (false);
    return (true);
}

bool checkDate(std::string& value)
{
    if (value.size() != 10 || std::count(value.begin(), value.end(), '-') != 2)
    {
        std::cerr << RED "Error: Wrong format => " << value << RESET << std::endl;
        return false;
    }

    int year = std::atoi(value.substr(0, 4).c_str());
    int month = std::atoi(value.substr(5, 2).c_str());
    int day = std::atoi(value.substr(8, 2).c_str());

    if (year <= 0)
    {
        std::cerr << RED "Error: Wrong year => " << value << RESET << std::endl;
        return false;
    }
    if (month < 1 || month > 12)
    {
        std::cerr << RED "Error: Wrong month => " << value << RESET << std::endl;
        return false;
    }

    bool leapYear = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
    int daysInMonth[12]= {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (leapYear) {
        daysInMonth[1] = 29;
    }

    if (day < 1 || day > daysInMonth[month - 1])
    {
        std::cerr << RED "Error: Wrong day => " << value << RESET << std::endl;
        return false;
    }

    return true;
}

bool checkValue(std::string& value)
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

void calculate(std::map<std::string, double>& data, std::string& date, std::string& value)
{
    std::map<std::string, double>::iterator it = data.lower_bound(date);
    if (it != data.end())
        std::cout << date + " => " << value << " = " << std::strtod(value.c_str(), NULL) * it->second << std::endl;
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
        if (*(value.begin()) == ' ')
            value.erase(value.begin());
        if (!checkValue(value))
            continue;
        calculate(this->_dataCsv, date, value);
    }
    fs.close();
}
