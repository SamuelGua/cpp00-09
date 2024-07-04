/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 15:52:45 by marie-evece       #+#    #+#             */
/*   Updated: 2024/07/04 09:10:21 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>

class Bureaucrat
{
	private:
		const std::string _name;
		int _grade;
		Bureaucrat();
	public:
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();
		std::string getName() const ;
		int getGrade() const ;
		void increment();
		void decrement();
		
		class GradeTooHighException : public std::exception
		{
			const char * what() const throw ()
			{
				return ("Exception: Grade is too high");
			}
		};

		class GradeTooLowException : public std::exception
		{
			const char * what() const throw ()
			{
				return ("Exception: Grade is too low");
			}
		};
		
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj);

#endif