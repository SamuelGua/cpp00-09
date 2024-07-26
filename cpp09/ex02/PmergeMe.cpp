/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 17:16:19 by scely             #+#    #+#             */
/*   Updated: 2024/07/26 20:08:56 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void divide(std::vector<int>& container);


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
        if (!(0 <= nb && std::numeric_limits<int>::max() >= nb))
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

/*-----------------------------vector-----------------------------*/
void  merge(std::vector<int>& leftSide, std::vector<int>& rightSide, std::vector<int>& container)
{
    
    std::vector<int>::iterator it_leftSide = leftSide.begin();
    std::vector<int>::iterator it_rightSide = rightSide.begin();
    container.clear();
    while (it_leftSide != leftSide.end() && it_rightSide != rightSide.end())
    {
        if (*it_leftSide < *it_rightSide)
        {
            container.push_back(*it_leftSide);
            it_leftSide++;
        }
        else
        {
            container.push_back(*it_rightSide);
            it_rightSide++;
        }
    }
    container.insert(container.end(), it_leftSide, leftSide.end());
    container.insert(container.end(), it_rightSide, rightSide.end());
}

void mergeSortAl(std::vector<int>& container)
{
    size_t arraySize = container.size();
    if (arraySize <= 1)
        return ;
    size_t arrayMiddle = arraySize / 2;
    std::vector<int> leftside(container.begin(), container.begin() + arrayMiddle);
    std::vector<int> rightside(container.begin() + arrayMiddle, container.end());
    mergeSortAl(leftside);
    mergeSortAl(rightside);
    merge(leftside, rightside, container);
}
/*-----------------------------list-----------------------------*/

void  merge(std::list<int>& leftSide, std::list<int>& rightSide, std::list<int>& container)
{
    
    std::list<int>::iterator it_leftSide = leftSide.begin();
    std::list<int>::iterator it_rightSide = rightSide.begin();
    container.clear();
    while (it_leftSide != leftSide.end() && it_rightSide != rightSide.end())
    {
        if (*it_leftSide < *it_rightSide)
        {
            container.push_back(*it_leftSide);
            it_leftSide++;
        }
        else
        {
            container.push_back(*it_rightSide);
            it_rightSide++;
        }
    }
    container.insert(container.end(), it_leftSide, leftSide.end());
    container.insert(container.end(), it_rightSide, rightSide.end());
}

void mergeSortAl(std::list<int>& container)
{
    size_t arraySize = container.size();
    if (arraySize <= 1)
        return ;
    size_t arrayMiddle = arraySize / 2;
    std::list<int> leftside;
    std::list<int> rightside;
    std::list<int>::iterator it = container.begin();
    for (size_t i = 0; i < arraySize; i++, it++)
    {
        if (i < arrayMiddle)
            leftside.push_back(*it);
        else
            rightside.push_back(*it);
    }
    mergeSortAl(leftside);
    mergeSortAl(rightside);
    merge(leftside, rightside, container);
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
        std::cout << ORANGE "This array is already sorted\n" RESET;
        return ;
    }
    //time 1
    std::time_t Vectortime_0 = std::clock(); 
    mergeSortAl(this->_vector);
    std::time_t Vectortime_1 = std::clock(); 
    
    //time 2
    std::time_t listTime_0 = std::clock();
    mergeSortAl(this->_list);
    std::time_t listTime_1 = std::clock();
    
    std::cout << "Before";
    this->print();
    std::cout << "After";
    this->print();
    
    std::cout << ORANGE << "Time to process a range of " << this->_vector.size() << " elements with std::vector : ";
    std::cout << 1000.0 * (Vectortime_1 - Vectortime_0) / CLOCKS_PER_SEC << "ms" << RESET << std::endl;
    
    std::cout << ORANGE << "Time to process a range of " << this->_list.size() << " elements with std::list   : ";
    std::cout << ORANGE << 1000.0 * (listTime_1 - listTime_0) / CLOCKS_PER_SEC << "ms" << RESET << std::endl;
}
