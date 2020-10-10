/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/27 16:42:07 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/29 10:48:32 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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
	std::cout << "----------------Berta----------------" << std::endl;
	try
	{
		Bureaucrat brt2("Berta", 150);
		std::cout << brt2;
		brt2.decrementGrade();
		std::cout << brt2;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-----------------Emmy-----------------" << std::endl;
	try
	{
		Bureaucrat brt3("Emmy", 420);
		std::cout << brt3;
		brt3.decrementGrade();
		brt3.decrementGrade();
		std::cout << brt3;
		brt3.incrementGrade();
		brt3.incrementGrade();
		std::cout << brt3;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}