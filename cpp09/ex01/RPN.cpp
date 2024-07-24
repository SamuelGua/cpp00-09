/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 16:51:50 by scely             #+#    #+#             */
/*   Updated: 2024/07/23 17:09:19 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

/**************************************************************************************/
/*                              Constructeur et destructeur                           */
/**************************************************************************************/

RPN::RPN(std::string input)
{
    if (input.empty())
        throw std::logic_error("Expection: Empty input");
    else
        fillStack(input);
}

RPN::RPN(RPN const &copy)
{
    this->rpnValue = copy.rpnValue;
}

RPN::~RPN()
{
}

/**************************************************************************************/
/*                              Surcharge d'operateur                                 */
/**************************************************************************************/

RPN& RPN::operator=(RPN const &copy)
{
    this->rpnValue = copy.rpnValue;
    return (*this);
}

/**************************************************************************************/
/*                                      Methodes                                      */
/**************************************************************************************/

void RPN::fillStack(std::string input)
{
    char c;
    double valeur_1;
    double valeur_2;

    for (size_t i = 0; i < input.size(); i++)
    {
        c = input[i];
       
        if (std::isspace(c))
            continue ;
    
        if (std::isdigit(c))
            this->rpnValue.push(c - 48);
        else if (rpnValue.size() > 1 && (c == '+' || c == '-'|| c == '*' || c == '/'))
        {
            valeur_1 = rpnValue.top();
            rpnValue.pop();
            valeur_2 = rpnValue.top();
            rpnValue.pop();
            if (c == '+')
                rpnValue.push(valeur_2 + valeur_1);
            else if (c == '-')
                rpnValue.push(valeur_2 - valeur_1); 
            else if (c == '/')
                rpnValue.push(valeur_2 / valeur_1);
            else if (c == '*')
                rpnValue.push(valeur_2 * valeur_1);
        }
        else 
            throw std::logic_error("Expection: Incorrect input");
    }
    if (rpnValue.size() != 1)
       throw std::logic_error("Expection: Wrongs numbers of digit or operator");
    
}

double RPN::getValue()
{
    return (this->rpnValue.top());
}
