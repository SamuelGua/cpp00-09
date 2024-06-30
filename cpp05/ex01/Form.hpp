/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marie-evecely <marie-evecely@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 17:41:36 by marie-evece       #+#    #+#             */
/*   Updated: 2024/06/30 18:39:19 by marie-evece      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>

class Form
{
	private:
		const std::string _name;
		int _grade;
		bool _issigned;
		const int _gradeToSigned;
		const int _gradeToExecute;
		Form();

	public:
		Form(std::string name, int grade, int _grade, int gradeTosigned, int gradeToexecute);
		Form(&copy);
		~Form();
	
		Form &operator=(Form const &obj);

		bool issigned();
		std::string getName();
		int getGrade();
		int gradeToSigned();
		int gradeToExecute();

};

std::ostream &operator<<(std::ostream &out, const Form &obj);

Form::Form(std::string name, int grade, int _grade, int gradeTosigned, int gradeToexecute) : _name(name),
_gradeToExecute(gradeToexecute)
{

}


Form::~Form()
{
}


#endif