/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 18:46:13 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/27 10:21:14 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name)
{
	this->_name = name;
	this->_ap = 40;
	this->_awp = NULL;
}

Character::Character(Character const &other)
{
	this->_name = other._name;
	this->_ap = other._ap;
	this->_awp = other._awp;
}

Character &Character::operator=(Character const &other)
{
	this->_name = other._name;
	this->_ap = other._ap;
	this->_awp = other._awp;
	return (*this);
}

Character::~Character()
{
}

void Character::recoverAP()
{
	this->_ap += 10;
	if (this->_ap > 40)
		this->_ap = 40;
}

void Character::equip(AWeapon *awp)
{
	this->_awp = awp;
}

std::string const &Character::getName() const
{
	return (this->_name);
}

int Character::getAP() const
{
	return (this->_ap);
}

AWeapon *Character::getAwp() const
{
	return(this->_awp);
}

void Character::attack(Enemy *e)
{
	if (this->_awp && e)
	{
		if (this->_ap < this->_awp->getAPCost())
		{
			std::cout << this->_name << " hasn't enough AP, can't attack." << std::endl;
		}
		else
		{
			this->_ap -= this->_awp->getAPCost();
			if (this->_ap < 0)
				this->_ap = 0;
			std::cout << this->_name << " attacks " << e->getType() << " with a " << this->_awp->getName() << "." << std::endl;
			this->_awp->attack();
			e->takeDamage(this->_awp->getDamage());
			if (e->getHP() == 0)
				e->~Enemy();
		}
	}
}

std::ostream &operator<<(std::ostream &out, Character const &chr)
{
	if (chr.getAwp())
		out << chr.getName() << " has " << chr.getAP() << " AP and wields a " << chr.getAwp()->getName() << std::endl;
	else
		out << chr.getName() << " has " << chr.getAP() << " AP and is unarmed" << std::endl;
	return (out);
}