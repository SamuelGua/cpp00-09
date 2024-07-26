/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 15:01:08 by scely             #+#    #+#             */
/*   Updated: 2024/07/25 17:06:58 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <stack>

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