/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 15:30:00 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/08 18:44:32 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int argc, char **argv)
{
	if (argc == 4)
		Replace newfile(argv[1], argv[2], argv[3]);
	else
		std::cout << "Must be three arguments: file_name, s1, s2." << std::endl;
	return (0);
}
