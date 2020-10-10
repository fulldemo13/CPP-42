/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 16:37:53 by fulldemo          #+#    #+#             */
/*   Updated: 2020/09/17 19:08:36 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::cout << "\tVECTOR" << std::endl;
	std::vector<int> vec;
	vec.push_back(1);
	vec.push_back(17);
	vec.push_back(42);
	std::vector<int>::iterator itv = easyfind(vec, 42);
	if (itv == vec.end())
		std::cout << "Not found." <<std::endl;
	else
		std::cout << *itv << " found." << std::endl;
	itv = easyfind(vec, 33);
	if (itv == vec.end())
		std::cout << "Not found." <<std::endl;
	else
		std::cout << *itv << " found." << std::endl;
	std::cout << "\tLIST" << std::endl;
	std::list<int> lst;
	lst.push_back(1);
	lst.push_back(17);
	lst.push_back(42);
	std::list<int>::iterator itls = easyfind(lst, 42);
	if (itls == lst.end())
		std::cout << "Not found." <<std::endl;
	else
		std::cout << *itls << " found." << std::endl;
	if (easyfind(lst, 33) == lst.end())
		std::cout << "Not found." <<std::endl;
	else
		std::cout << "33 Found." << std::endl;
	std::cout << "\tDEQUE" << std::endl;
	std::deque<int> dq;
	dq.push_back(1);
	dq.push_back(17);
	dq.push_back(42);
	std::deque<int>::iterator itdq = easyfind(dq, 42);
	if (itdq == dq.end())
		std::cout << "Not found." <<std::endl;
	else
		std::cout << *itdq << " found." << std::endl;
	if (easyfind(dq, 33) == dq.end())
		std::cout << "Not found." <<std::endl;
	else
		std::cout << "33 Found." << std::endl;
	return (0);
}