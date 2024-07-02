/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 15:52:45 by marie-evece       #+#    #+#             */
/*   Updated: 2024/07/02 17:59:24 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:
		const std::string _name;
		int _grade;
	public:
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();
		std::string getName() const ;
		int getGrade() const ;
		void increment();
		void decrement();
		void signForm(AForm &form);
		void executeForm(AForm const & form);
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj);

#endif