/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 09:41:16 by scely             #+#    #+#             */
/*   Updated: 2024/07/04 09:15:34 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/**************************************************************************************/
/*                              Constructeur et destructeur                           */
/**************************************************************************************/

Form::Form(std::string name, int gradeTosigned, int gradeToexecute) : _name(name), _gradeToSign(gradeTosigned), _gradeToExecute(gradeToexecute)
{
	// std::cout << "Form constructor is called" << std::endl;
    _isSigned = false;
}

Form::Form(const Form &copy) : _name(copy._name),_isSigned(false), 
_gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute)
{
    // std::cout << "Copy constructor is called" << std::endl;
}

Form::~Form()
{
	// std::cout << "Form destructor is called" << std::endl;
}

/**************************************************************************************/
/*                              Surcharge d'operator                                  */
/**************************************************************************************/

Form &Form::operator=(const Form &obj)
{
	if (this != &obj)
        _isSigned = obj._isSigned;
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const Form &obj)
{
	out << obj.getName() << std::endl;
	out << "Grade to be signed " << obj.gradeToSigned() << " | " << "Grade to be execute " << obj.gradeToExecute() << std::endl;
	out << (obj.issigned() ? "He is signed" : "He is not signed") << std::endl;
    return (out);
}
/**************************************************************************************/
/*                                      Methodes                                      */
/**************************************************************************************/

std::string Form::getName() const
{
	return(_name);
}

bool Form::issigned() const
{
	return(_isSigned);
}

int Form::gradeToExecute() const
{
	return(_gradeToExecute);
}

int Form::gradeToSigned() const
{
	return(_gradeToSign);
}

void Form::beSigned(Bureaucrat &obj)
{
	if (obj.getGrade() <= _gradeToSign)
		_isSigned = true;
	else
		throw Form::GradeTooLowException();
}
