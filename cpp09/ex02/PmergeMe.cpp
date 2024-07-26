/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 17:16:19 by scely             #+#    #+#             */
/*   Updated: 2024/07/25 21:17:45 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

/**************************************************************************************/
/*                              Constructeur et destructeur                           */
/**************************************************************************************/

PmergeMe::PmergeMe(int ac, char **av)
{
    long nb;
    char *endptr;
    for (int i = 1; i < ac; i++)
    {
        nb = (std::strtol(av[i], &endptr, 10));
        if (errno == ERANGE || *endptr != '\0' || endptr == av[i]) 
            throw std::logic_error (RED "Exception: Wrongs inputs" RESET);
        if (!(std::numeric_limits<int>::min() <= nb && std::numeric_limits<int>::max() >= nb))
            throw std::logic_error (RED "Exception: Incorrect number" RESET);
        if (std::find(this->_list.begin(), this->_list.end(), nb) != this->_list.end())
            throw std::logic_error (RED "Exception: duplicate number" RESET);
        this->_list.push_back(nb);
        this->_vector.push_back(nb);
    }
}

PmergeMe::PmergeMe(const PmergeMe& copy)
{
    *this = copy;
}


PmergeMe::~PmergeMe()
{
}

/**************************************************************************************/
/*                              Surcharge d'operateur                                 */
/**************************************************************************************/

PmergeMe& PmergeMe::operator=(const PmergeMe& obj)
{
    if (this != &obj)
    {
        this->_list = obj._list;
        this->_vector = obj._vector;
    }
    return (*this);
}

/**************************************************************************************/
/*                                      Methodes                                      */
/**************************************************************************************/

void PmergeMe::print(void)
{
    std::list<int>::iterator it_list = this->_list.begin();
    std::cout << "List: \t";
    for (; it_list != this->_list.end(); it_list++)
        std::cout << *it_list << " ";
    std::cout << std::endl;
    std::vector<int>::iterator it_vector = this->_vector.begin();
    std::cout << "Vector: ";
    for (; it_vector != this->_vector.end();  it_vector++)
        std::cout << *it_vector << " ";
    std::cout << std::endl;


}

void PmergeMe::sorting()
{
    std::vector<int>::iterator it = _vector.begin();
    for ( ; it != _vector.end(); it++)
    {
        if (it + 1 != _vector.end() && *it > *(it + 1))
            break;  
    }
    if (it == this->_vector.end())
    {
        std::cout << ORANGE  "This array is already sorted\n"  RESET;
        return ;
    }
}