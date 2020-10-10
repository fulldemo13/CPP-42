/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 18:29:12 by fulldemo          #+#    #+#             */
/*   Updated: 2020/09/15 16:09:17 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template<typename T>
void iter(T *array, int len, void (*f)(T const &n))
{
	for (int i = 0; i < len; i++)
	{
		(*f)(array[i]);
	}
}

template<typename T>
void show(T const &n)
{
	std::cout << n << std::endl;
}

int main()
{
	char c[5] = {'a', 'e', 'i', 'o', 'u'};
	int  i[5] = {1, 2, 3, 4, 5};
	std::string str[3] = {"Hola", "que", "tal"};

	iter(c, 5, &show);
	iter(i, 5, &show);
	iter(str, 3, &show);
	return (0);
}