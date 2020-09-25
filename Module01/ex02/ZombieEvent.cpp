/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 16:32:32 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/08 20:01:33 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
}

ZombieEvent::~ZombieEvent()
{
	std::cout << "No more " << this->_type << "-type zombies." << std::endl;
}

std::string ZombieEvent::_names[9] = {"Bub", "BigDaddy", "Hannah", "Hinzman", "Schon", "LittleDad", "TheWitcher", "Tom", "Fulldemon"};

void ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

Zombie *ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, this->_type));
}

Zombie *ZombieEvent::randomChump(void)
{
	return ZombieEvent::newZombie(_names[std::rand() % 9]);
}
