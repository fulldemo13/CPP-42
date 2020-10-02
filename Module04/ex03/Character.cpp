/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 17:08:54 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/27 11:18:40 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name) : _name(name), _count(0)
{
	for (int i = 0; i < 4; i++)
		this->_pocket[i] = nullptr;
	
}

Character::Character(Character const &other)
{
	this->_name = other._name;
	this->_count = other._count;
	for (int i = 0; i < other._count; i++)
		this->_pocket[i] = other._pocket[i]->clone();
	for (int i = 0; i < 4; i++)
		this->_pocket[i] = nullptr;		
}

Character &Character::operator=(Character const &other)
{
	this->_name = other._name;
	for (int i = 0; i < this->_count; i++)
		delete this->_pocket[i];	
	this->_count = other._count;
	for (int i = 0; i < other._count; i++)
		this->_pocket[i] = other._pocket[i]->clone();
	for (int i = 0; i < 4; i++)
		this->_pocket[i] = nullptr;	
	return (*this);	
}

Character::~Character()
{
	for (int i = 0; i < this->_count; i++)
		delete this->_pocket[i];
}

std::string const &Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria *m)
{
	if (this->_count == 4 || m == nullptr)
		return;
	for (int i = 0; i < this->_count; i++)
		if (this->_pocket[i] == m)
			return;
	this->_pocket[this->_count] = m;
	this->_count++;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= this->_count || this->_pocket[idx] == nullptr)
		return;
	for (int i = idx; i < 3; i++)
	{
		this->_pocket[i] = this->_pocket[i + 1];
		this->_pocket[i + 1] = nullptr;
	}
	this->_count--;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= this->_count || this->_pocket[idx] == nullptr)
		return;
	this->_pocket[idx]->use(target);
}