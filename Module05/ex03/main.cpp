/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/27 16:42:07 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/29 11:44:32 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{	
	Intern me;
	Form *frm1 = me.makeForm("shrubbery creation", "Home");
	Form *frm2 = me.makeForm("robotomy request", "Ian");
	Form *frm3 = me.makeForm("presidential pardon", "Pardon");
	Form *frm4 = me.makeForm("presidentialError", "Error");
	srand(time(NULL));

	try
	{
		Bureaucrat brt("John", 1);
		std::cout << *frm1 << *frm2 << *frm3 << brt;
		brt.signForm(*frm4);
		brt.executeForm(*frm4);
		brt.executeForm(*frm1);
		brt.executeForm(*frm2);
		brt.executeForm(*frm3);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << "////////////////////////////////////////////////////////////////////" << std::endl;
	try
	{
		Bureaucrat brt("John", 1);
		std::cout << *frm1 << *frm2 << *frm3 << brt;
		brt.signForm(*frm1);
		brt.signForm(*frm2);
		brt.signForm(*frm3);
		std::cout << *frm1 << *frm2 << *frm3;
		brt.executeForm(*frm1);
		brt.executeForm(*frm2);
		brt.executeForm(*frm3);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "////////////////////////////////////////////////////////////////////" << std::endl;
	try
	{
		Bureaucrat brt("John", 145);
		std::cout << *frm1 << brt;
		brt.executeForm(*frm1);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "////////////////////////////////////////////////////////////////////" << std::endl;
	try
	{
		Bureaucrat brt("John", 72);
		std::cout << *frm2 << brt;
		brt.executeForm(*frm2);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "////////////////////////////////////////////////////////////////////" << std::endl;
	try
	{
		Bureaucrat brt("John", 25);
		std::cout << *frm3 << brt;
		brt.executeForm(*frm3);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	delete frm1;
	delete frm2;
	delete frm3;
	return (0);
}