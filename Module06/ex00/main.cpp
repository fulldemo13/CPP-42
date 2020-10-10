/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 15:59:47 by fulldemo          #+#    #+#             */
/*   Updated: 2020/09/11 16:29:02 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ScalarConverter.hpp"

int main(int argc, char const **argv)
{
	if (argc != 2)
	{
		std::cout << "Usage: ./convert {parameter}" << std::endl;
		return (1);
	}
	ScalarConverter convert(argv[1]);
	std::cout << convert;
	return (0);
}