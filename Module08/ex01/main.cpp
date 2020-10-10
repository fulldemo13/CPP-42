/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 19:40:42 by fulldemo          #+#    #+#             */
/*   Updated: 2020/09/23 13:38:40 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <list>

int main()
{
	Span sp = Span(3);
	try
	{
		sp.addNumber(5);
		sp.addNumber(42);
		sp.addNumber(17);
	//	sp.addNumber(9);
	//	sp.addNumber(11);
	std::cout << "Shortest: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest: " << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	
	Span spp = Span(10000);
	try
	{
		for (int i = 0; i < 9999; i++)
		{
			spp.addNumber(i);
		}
		spp.addNumber(10042);
		std::cout << "Shortest: " << spp.shortestSpan() << std::endl;
		std::cout << "Longest: " << spp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	
	try
	{
		std::list<int> lst;
		lst.push_back(1);
		lst.push_back(2);
		lst.push_back(3);
		lst.push_back(4);

		Span sppp = Span(4);
		sppp.addNumber(lst.begin(), lst.end());
		std::cout << "Shortest: " << sppp.shortestSpan() << std::endl;
		std::cout << "Longest: " << sppp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	
	return (0);
}