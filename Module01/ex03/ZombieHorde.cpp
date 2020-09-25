/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 17:37:43 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/07 18:46:00 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "ZombieHorde.hpp"

std::string ZombieHorde::_names[9] = {"Bub", "BigDaddy", "Hannah", "Hinzman", "Schon", "LittleDad", "TheWitcher", "Tom", "Fulldemon"};

ZombieHorde::ZombieHorde(int n) : _n(n)
{
	srand (time(NULL));
	this->_Zombies = new Zombie[n];
	for (int i = 0; i < _n; i++)
	{
		this->_Zombies[i].setZombie(_names[std::rand() % 9], "undead");
		this->_Zombies[i].advert();
	}	
}

ZombieHorde::~ZombieHorde(void)
{
	delete [] _Zombies;
	std::cout << "No more zombies." << std::endl;
}


void	ZombieHorde::announce(void)
{
	for (int i = 0; i < _n; i++)
	{
		this->_Zombies[i].Zombie::announce();
	}
}