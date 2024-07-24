/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 15:01:08 by scely             #+#    #+#             */
/*   Updated: 2024/07/23 17:08:27 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <stack>
#include <cctype>
#include <stdlib.h>

class RPN
{
    private:
        std::stack<double> rpnValue;
        RPN();
        void fillStack(std::string input);
    public:
        RPN(RPN const &copy);
        RPN& operator=(RPN const &copy);
        RPN(std::string input);
        double getValue();
        ~RPN();
};