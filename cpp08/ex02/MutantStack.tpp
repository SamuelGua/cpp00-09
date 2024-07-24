/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 16:03:23 by scely             #+#    #+#             */
/*   Updated: 2024/07/23 17:56:30 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

/**************************************************************************************/
/*                              Constructeur et destructeur                           */
/**************************************************************************************/

template <class T>
MutantStack<T>::MutantStack()
{
}

template <class T>
MutantStack<T>::MutantStack(const MutantStack& copy)
{
    this->c = copy.c;
}

template <class T>
MutantStack<T>::~MutantStack()
{
}

/**************************************************************************************/
/*                              Surcharge d'operateur                                 */
/**************************************************************************************/

template <class T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& copy)
{
    if (this != copy)
        this->c = copy.c;
}

/**************************************************************************************/
/*                                      Methodes                                      */
/**************************************************************************************/

template <class T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
    return this->c.begin();
}

template <class T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const
{
    return this->c.begin();
}

template <class T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
    return this->c.end();
}

template <class T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const
{
    return this->c.end();
}

template <class T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin()
{
    return this->c.rbegin();
}

template <class T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rbegin() const
{
    return this->c.rbegin();
}

template <class T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend()
{
    return this->c.rend();
}

template <class T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rend() const
{
    return this->c.rend();
}