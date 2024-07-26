/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 17:14:35 by scely             #+#    #+#             */
/*   Updated: 2024/07/26 21:40:29 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <string>
#include <stdlib.h>
#include <limits>
#include <vector>
#include <list>
#include <errno.h>
#include <algorithm>
#include <ctime>

#define ORANGE "\033[38;5;208m"
#define RED "\033[1;31m"
#define RESET  "\033[0m"

class PmergeMe
{
    private:
        std::list<int> _list;
        std::vector<int> _vector;
        PmergeMe();
        
    public:
        PmergeMe(int ac, char **av);
        PmergeMe(const PmergeMe& copy);
        ~PmergeMe();
        PmergeMe& operator=(const PmergeMe& obj);

        void print(void);
        void sorting(void);
};

#endif
