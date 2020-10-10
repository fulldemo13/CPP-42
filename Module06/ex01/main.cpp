/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 17:10:16 by fulldemo          #+#    #+#             */
/*   Updated: 2020/09/10 19:15:56 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main()
{
	srand(time(NULL));
	Data *d;
	void *raw;

	raw = serialize();
	d = deserialize(raw);
	std::cout << "s1: " << d->s1 << std::endl << "n:  " << d->n  << std::endl << "s2: " << d->s2 << std::endl;
	delete static_cast<char*>(raw);
	delete d;
	return (0);
}