/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 17:41:36 by marie-evece       #+#    #+#             */
/*   Updated: 2024/07/08 10:52:53 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

class Bureaucrat;

class Form
{
	private:
		const std::string _name;
		bool _isSigned;
		const int _gradeToSign;
		const int _gradeToExecute;
		Form();

	public:
		Form(std::string name, int gradeTosigned, int gradeToexecute);
		Form(const Form &copy);
		~Form();
	
		Form &operator=(Form const &obj);
		
		std::string getName() const;
		bool issigned() const;
		int gradeToSigned() const;
		int gradeToExecute() const;
		void beSigned(Bureaucrat &obj);

		class GradeToBeSigned : public std::exception
		{
			const char * what() const throw()
			{
				return ("Exception: Grade is too low to be signed");
			}
		};
		
		class GradeTooLowException : public std::exception
		{
			const char * what() const throw ()
			{
				return ("Exception: Grade Too Low for Form");
			}
		};

		class GradeTooHighException : public std::exception
		{
			const char * what() const throw ()
			{
				return ("Exception: Grade Too High for FORM");
			}
		};
};

std::ostream &operator<<(std::ostream &out, const Form &obj);

#endif