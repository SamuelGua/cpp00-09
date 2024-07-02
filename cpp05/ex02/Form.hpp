/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 17:41:36 by marie-evece       #+#    #+#             */
/*   Updated: 2024/07/02 11:05:11 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

class Bureaucrat;

class AForm
{
	private:
		const std::string _name;
		bool _isSigned;
		const int _gradeToSign;
		const int _gradeToExecute;
		AForm();

	public:
		AForm(std::string name, int gradeTosigned, int gradeToexecute);
		AForm(const AForm &copy);
		~AForm();
	
		AForm &operator=(AForm const &obj);

		
		virtual std::string getName() const = 0;
		bool issigned() const;
		int gradeToSigned() const;
		int gradeToExecute() const;
		void beSigned(Bureaucrat &obj);
};

std::ostream &operator<<(std::ostream &out, const AForm &obj);

#endif