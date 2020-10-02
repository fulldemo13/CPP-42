/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 16:39:55 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/27 10:13:19 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	
	Victim jim("Jimmy");
	Peon joe("Joe");

	std::cout << robert << jim << joe;
	
	robert.polymorph(jim);
	robert.polymorph(joe);
	
	return (0);
}