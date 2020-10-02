/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 17:39:55 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/21 19:11:26 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type)
{
	this->_hp = hp;
	this->_type = type;
}

Enemy::Enemy(Enemy const &other)
{
	this->_hp = other._hp;
	this->_type = other._type;
}

Enemy &Enemy::operator=(Enemy const &other)
{
	this->_hp = other._hp;
	this->_type = other._type;
	return (*this);
}

Enemy::~Enemy()
{
}

std::string const &Enemy::getType() const
{
	return (this->_type);
}

int Enemy::getHP() const
{
	return (this->_hp);
}

void Enemy::takeDamage(int dmg)
{
	if (dmg >= 0)
		this->_hp -= dmg;
		if (this->_hp < 0)
			this->_hp = 0;
}