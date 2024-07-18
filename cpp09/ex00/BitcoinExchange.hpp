/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 15:01:08 by scely             #+#    #+#             */
/*   Updated: 2024/07/13 20:05:25 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_HPP
#define BITCOIN_HPP

#include <string>
#include <iostream>
#include <algorithm>


void split_datacsv(std::string buffer, std::string *tab)
{
    if (tab[0].empty())
        tab[0].erase();
    if (tab[1].empty())
        tab[1].erase();
    
    tab[0].append(buffer, 0, 10);
    tab[0].append(buffer, 11, buffer.length() - 11);
}


#endif