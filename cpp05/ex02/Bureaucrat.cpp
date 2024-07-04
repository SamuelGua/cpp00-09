/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 16:20:13 by marie-evece       #+#    #+#             */
/*   Updated: 2024/07/04 09:18:31 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/**************************************************************************************/
/*                              Constructeur et destructeur                           */
/**************************************************************************************/

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	// std::cout << "Bureaucrat constructor is called" << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
}
Bureaucrat::Bureaucrat(const Bureaucrat& copy) : _name(copy._name), _grade(copy._grade)
{
	// std::cout << "Bureaucrat copy constructor is called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	// std::cout << "Bureaucrat destructor is called" << std::endl;
}

/**************************************************************************************/
/*                              Surcharge d'operator                                  */
/**************************************************************************************/

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copy)
{
	if (this != &copy)
	{
		this->_grade = copy._grade;
		static_cast<std::string>(this->_name) = static_cast<std::string>(copy._name);
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj)
{
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << "." << std::endl;
	return out;
}

/**************************************************************************************/
/*                                      Methodes                                      */
/**************************************************************************************/

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

std::string Bureaucrat::getName() const
{
	return (this->_name);
}

void Bureaucrat::increment()
{
	if (_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade -= 1;
}

void Bureaucrat::decrement()
{
	if (_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade += 1;

}

void Bureaucrat::signForm(AForm &form)
{
	if (form.issigned())
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	else
		std::cout << this->getName() << " couldn't " << form.getName() << " because he is not qualified." << std::endl;		
}

void Bureaucrat::executeForm(AForm const & form)
{
	try
	{
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	}
	catch(const char *error)
	{
		std::cerr << error << '\n';
	}
}
