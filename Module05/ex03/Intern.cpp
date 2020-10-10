/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 19:02:44 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/29 10:40:57 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(Intern const &other)
{
	(void)other;
}

Intern &Intern::operator=(Intern const &other)
{
	(void)other;
	return (*this);
}

Intern::~Intern()
{
}

Form *Intern::newShrubberyCreationForm(std::string target)
{
    return (new ShrubberyCreationForm(target));
}

Form *Intern::newRobotomyRequestForm(std::string target)
{
    return (new RobotomyRequestForm(target));
}

Form *Intern::newPresidentialPardonForm(std::string target)
{
    return (new PresidentialPardonForm(target));
}

Form *Intern::makeForm(std::string const &type, std::string const &target)
{
	std::string names[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	InternFPointer functions[3] = {&Intern::newShrubberyCreationForm, &Intern::newRobotomyRequestForm, &Intern::newPresidentialPardonForm};
	for (int i = 0; i < 3; i++)
	{
		if (type == names[i])
			return (this->*functions[i])(target);
	}
	std::cout << "Form <" << type << "> not found" << std::endl;
	return (nullptr);
}