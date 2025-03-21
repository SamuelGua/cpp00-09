/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 18:59:00 by scely             #+#    #+#             */
/*   Updated: 2024/07/08 13:42:50 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_HPP
#define PRESIDENTIAL_HPP

#include <string>
#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private:
        const std::string target;
        PresidentialPardonForm();

    public:
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(PresidentialPardonForm const &copy);
        ~PresidentialPardonForm();

        PresidentialPardonForm &operator=(PresidentialPardonForm const &copy);

        void execute(Bureaucrat const & executor) const;

        class GradeTooLowException : public std::exception
		{
			const char * what() const throw()
			{
				return ("Exception: Grade is too low to ask presidential pardon");
			}
		};
};

#endif