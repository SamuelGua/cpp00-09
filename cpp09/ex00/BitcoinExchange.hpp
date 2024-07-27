/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 15:01:08 by scely             #+#    #+#             */
/*   Updated: 2024/07/27 11:29:59 by scely            ###   ########.fr       */
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