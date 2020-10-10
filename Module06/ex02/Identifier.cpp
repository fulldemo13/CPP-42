/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identifier.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 16:07:58 by fulldemo          #+#    #+#             */
/*   Updated: 2020/09/11 16:19:33 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identifier.hpp"

Base *generate(void)
{
	int i;

	i = rand() % 3;
	if (i == 0)
		return (new A);
	else if (i == 1)
		return (new B);
	else
		return (new C);
}

void identify_from_pointer(Base *p)
{
	if (dynamic_cast<A*>(p) != nullptr)
		std::cout << "A" << std::endl;
	if (dynamic_cast<B*>(p) != nullptr)
		std::cout << "B" << std::endl;
	if (dynamic_cast<C*>(p) != nullptr)
		std::cout << "C" << std::endl;
}
void identify_from_reference(Base &p)
{
	if (dynamic_cast<A*>(&p) != nullptr)
		std::cout << "A" << std::endl;
	if (dynamic_cast<B*>(&p) != nullptr)
		std::cout << "B" << std::endl;
	if (dynamic_cast<C*>(&p) != nullptr)
		std::cout << "C" << std::endl;
}