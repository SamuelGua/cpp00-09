/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 18:03:04 by scely             #+#    #+#             */
/*   Updated: 2024/07/04 09:21:08 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOT_HPP
#define ROBOT_HPP

#include <string>
#include <iostream>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    private:
        const std::string target;
        RobotomyRequestForm();
    public:
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(RobotomyRequestForm const &copy);
        ~RobotomyRequestForm();
        
        RobotomyRequestForm &operator=(RobotomyRequestForm const &copy);
        
        void execute(Bureaucrat const & executor) const;
        
        class GradeTooLowException : public std::exception
		{
			const char * what() const throw()
			{
				return ("Exception: Grade is too low to robotomize");
			}
		};
};

#endif
