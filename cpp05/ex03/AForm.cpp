/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 09:41:16 by scely             #+#    #+#             */
/*   Updated: 2024/07/02 10:51:27 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

/**************************************************************************************/
/*                              Constructeur et destructeur                           */
/**************************************************************************************/

AForm::AForm(std::string name, int gradeTosigned, int gradeToexecute) : _name(name), _gradeToSign(gradeTosigned), _gradeToExecute(gradeToexecute)
{
	// std::cout << "AForm constructor is called" << std::endl;
    _isSigned = false;
}

AForm::AForm(const AForm &copy) : _name(copy._name),_isSigned(false), 
_gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute)
{
    // std::cout << "Copy constructor is called" << std::endl;
}

AForm::~AForm()
{
	// std::cout << "AForm destructor is called" << std::endl;
}
AForm::AForm() : _name("AForm"), _gradeToSign(75), _gradeToExecute(75)
{
	this->_isSigned = false;
}
/**************************************************************************************/
/*                              Surcharge d'operator                                  */
/**************************************************************************************/

AForm &AForm::operator=(const AForm &obj)
{
	if (this != &obj)
	{
		static_cast<std::string> (this->_name) = obj._name;
        _isSigned = obj._isSigned;
		const_cast<int&>(this->_gradeToSign) = obj._gradeToSign;
		const_cast<int&>(this->_gradeToExecute) = obj._gradeToExecute;
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const AForm &obj)
{
	out << obj.getName() << std::endl;
	out << "Grade to be signe " << obj.gradeToSigned() << " | " << "Grade to be exectue " << obj.gradeToExecute() << std::endl;
	out << (obj.issigned() ? "He is signed" : "He is not signed") << std::endl;
    return (out);
}
/**************************************************************************************/
/*                                      Methodes                                      */
/**************************************************************************************/

std::string AForm::getName() const
{
	return(_name);
}

bool AForm::issigned() const
{
	return(_isSigned);
}

int AForm::gradeToExecute() const
{
	return(_gradeToExecute);
}

int AForm::gradeToSigned() const
{
	return(_gradeToSign);
}

void AForm::beSigned(Bureaucrat &obj)
{
	if (obj.getGrade() <= _gradeToSign)
		_isSigned = true;
	else
		throw "AForm::GradeTooLowException";
}
