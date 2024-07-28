/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marie-evecely <marie-evecely@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 15:01:08 by scely             #+#    #+#             */
/*   Updated: 2024/07/27 14:07:21 by marie-evece      ###   ########.fr       */
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
        std::map<std::string, int> _dataCsv;
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& copy);
        BitcoinExchange& operator=(const BitcoinExchange& obj);
        ~BitcoinExchange();
        
        void convert(std::string dataBase);
};

#endif