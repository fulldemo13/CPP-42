/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 16:43:58 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/07 17:34:56 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void)
{
	srand (time(NULL));
	ZombieEvent event;
	event.setZombieType("undead");
	Zombie	*Zombie1;
	Zombie	*Zombie2;

	Zombie1 = event.randomChump();
	Zombie2 = event.randomChump();
	Zombie1->announce();
	Zombie2->announce();
	delete Zombie1;
	delete Zombie2;
	return (0);
}