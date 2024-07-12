/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 14:58:53 by scely             #+#    #+#             */
/*   Updated: 2024/07/12 18:00:35 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANSTACK_HPP
#define MUTANSTACK_HPP

#include <stack>
#include <list>
#include <stack>
#include <iostream>

template <class T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack();
        MutantStack(const MutantStack& copy);
        MutantStack& operator=(const MutantStack& copy);
        ~MutantStack();

        typedef typename MutantStack<T>::container_type::iterator iterator;
        typedef typename MutantStack<T>::container_type::const_iterator const_iterator;
        typedef typename MutantStack<T>::container_type::reverse_iterator reverse_iterator;
        typedef typename MutantStack<T>::container_type::const_reverse_iterator const_reverse_iterator;

        iterator            begin(void);
        const_iterator      begin(void) const;
        
        iterator            end(void);
        const_iterator      end(void) const;

        reverse_iterator          rend(void);
        const_reverse_iterator    rend(void) const;

        reverse_iterator          rbegin(void);
        const_reverse_iterator    rbegin(void) const;
};

#include "MutantStack.tpp"

#endif