/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/27 16:42:07 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/27 19:12:10 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{	
	std::cout << "-----------------John-----------------" << std::endl;
	try
	{
		Bureaucrat brt1("John", 1);
		std::cout << brt1;
		brt1.incrementGrade();
		std::cout << brt1;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Form frm1("Document1", 42, 42);
		std::cout << frm1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Form frm1("Document2", 1000, 1);
		std::cout << frm1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Form frm1("Document3", 1, -10);
		std::cout << frm1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat brt1("John", 1);
		Form frm1("Document4", 42, 42);
		std::cout << frm1 << brt1;
		brt1.signForm(frm1);
		std::cout << frm1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat brt1("John", 42);
		Form frm1("Document5", 1, 1);
		std::cout << frm1 << brt1;
		brt1.signForm(frm1);
		std::cout << frm1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}