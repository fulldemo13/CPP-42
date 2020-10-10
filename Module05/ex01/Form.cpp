/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/27 18:12:24 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/29 11:26:31 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const &name, int const signGrade, int const executeGrade) : _name(name),
	_sign(false), _signGrade(signGrade), _executeGrade(executeGrade)
{
	if (this->_signGrade < 1 || this->_executeGrade < 1)
		throw (Form::GradeTooHighException());
	else if (this->_signGrade > 150 || this->_executeGrade > 150)
		throw (Form::GradeTooLowException());
}

Form::Form(Form const &other): _name(other._name),
	_sign(false), _signGrade(other._signGrade), _executeGrade(other._executeGrade)
{
	if (this->_signGrade < 1 || this->_executeGrade < 1)
		throw (Form::GradeTooHighException());
	else if (this->_signGrade > 150 || this->_executeGrade > 150)
		throw (Form::GradeTooLowException());
}

Form &Form::operator=(Form const &other)
{
	this->_sign = other._sign;
	return (*this);
}

Form::~Form()
{
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Exception Form: Sign Grade or Execute Grade too high";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Exception Form: Sign Grade or Execute Grade too low";
}

std::string Form::getName() const
{
	return (this->_name);
}

bool Form::getSign() const
{
	return (this->_sign);
}

int Form::getSignGrade() const
{
	return (this->_signGrade);
}

int Form::getExecuteGrade() const
{
	return (this->_executeGrade);
}

void Form::beSigned(Bureaucrat const &brt)
{
	if (brt.getGrade() > this->_signGrade)
		throw (Form::GradeTooLowException());
	this->_sign = true;
}	

std::ostream &operator<<(std::ostream &out, Form const &other)
{
	if (&other != nullptr)
	{
		if (other.getSign())
			out << "<" << other.getName() << "> is signed. Its sign Grade is <" << other.getSignGrade() << "> and its execut Grade is <" << other.getExecuteGrade() << ">" << std::endl;
		else
			out << "<" << other.getName() << "> is NOT signed. Its sign Grade is <" << other.getSignGrade() << "> and its execut Grade is <" << other.getExecuteGrade() << ">" << std::endl;
	}
	return (out);
}