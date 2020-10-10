/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/27 16:42:07 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/29 10:57:40 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{	
	Form *frm1 = new ShrubberyCreationForm("Home");
	Form *frm2 = new RobotomyRequestForm("Ian");
	Form *frm3 = new PresidentialPardonForm("Pardon");
	Form *frm4 = nullptr;
 	srand(time(NULL));

	try
	{
		Bureaucrat brt("John", 1);
		std::cout << *frm1 << *frm2 << *frm3 << *frm4 << brt;
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