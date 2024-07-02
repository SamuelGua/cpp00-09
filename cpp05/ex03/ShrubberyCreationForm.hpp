/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 13:55:42 by scely             #+#    #+#             */
/*   Updated: 2024/07/02 21:23:51 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_HPP
#define SHRUBBERY_HPP

#include <string>
#include <iostream>
#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
    private:
        const std::string target;
        ShrubberyCreationForm();
    public:
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(ShrubberyCreationForm const &copy);
        ~ShrubberyCreationForm();

        ShrubberyCreationForm &operator=(ShrubberyCreationForm const &copy);
        
        void execute(Bureaucrat const & executor) const;
};


#endif