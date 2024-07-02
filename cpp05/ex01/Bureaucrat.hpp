/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 15:52:45 by marie-evece       #+#    #+#             */
/*   Updated: 2024/07/02 10:56:37 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include "Form.hpp"

class Form;

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
		void signForm(Form &form);
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj);

#endif