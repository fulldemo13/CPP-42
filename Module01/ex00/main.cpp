/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 15:33:00 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/06 15:54:07 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void ponyOnTheHeap(void)
{
	Pony *p = new Pony("Brave", "Black", "Heap");
	delete p;
}

void ponyOnTheStack(void)
{
	Pony p = Pony("Gigant", "Brown", "Stack");
}

int main(void)
{
	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}