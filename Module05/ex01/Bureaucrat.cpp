/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/27 16:27:33 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/29 11:04:55 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &name, int grade) : _name(name), _grade(grade)
{
	if (this->_grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (this->_grade > 150)
		throw (Bureaucrat::GradeTooLowException());
}

Bureaucrat::Bureaucrat(Bureaucrat const &other) : _name(other._name), _grade(other._grade)
{
	if (this->_grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (this->_grade > 150)
		throw (Bureaucrat::GradeTooLowException());
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other)
{
	this->_name = other._name;
	this->_grade = other._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Exception Bureaucrat: Grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Exception Bureaucrat: Grade too low";
}

std::string Bureaucrat::getName() const
{
	return (this->_name);
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void Bureaucrat::incrementGrade()
{
	this->_grade--;
	if (this->_grade < 1)
		throw (Bureaucrat::GradeTooHighException());	
}

void Bureaucrat::decrementGrade()
{
	this->_grade++;
	if (this->_grade > 150)
		throw (Bureaucrat::GradeTooLowException());
}

void Bureaucrat::signForm(Form &frm) const
{
	if (&frm != nullptr)
	{
		if (frm.getSignGrade() < this->_grade)
			std::cout << "<" << this->_name << "> cant sign <" << frm.getName() << "> because it's grade is too low." << std::endl;
		else
			std::cout << "<" << this->_name << "> signs <" << frm.getName() << ">" << std::endl;
		frm.beSigned(*this);
	}
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &other)
{
	if (&other != nullptr)
		out << "<" << other.getName() << ">, bureaucrat grade <" << other.getGrade() << ">" << std::endl;
	return (out);
}