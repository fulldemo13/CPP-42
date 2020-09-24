/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 08:49:11 by fulldemo          #+#    #+#             */
/*   Updated: 2020/05/19 09:41:52 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	to_upper(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

int 	main(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (i < argc)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				std::cout << to_upper(argv[i][j]);
				j++;
			}
			i++;
		}
		std::cout << std::endl;
	}	
	return (0);
}