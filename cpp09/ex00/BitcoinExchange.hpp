/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 15:01:08 by scely             #+#    #+#             */
/*   Updated: 2024/07/28 22:06:20 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_HPP
#define BITCOIN_HPP

#include <string>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <limits>
#include <map>

#define ORANGE "\033[38;5;208m"
#define RED "\033[1;31m"
#define RESET  "\033[0m"

class BitcoinExchange
{
    private:
        std::map<std::string, double> _dataCsv;
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& copy);
        BitcoinExchange& operator=(const BitcoinExchange& obj);
        ~BitcoinExchange();
        
        void convert(std::string dataBase);
};

#endif