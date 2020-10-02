/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiningBarge.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 17:47:44 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/24 18:37:44 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MiningBarge.hpp"

MiningBarge::MiningBarge() : _count(0)
{
	for (int i = 0; i < 4; i++)
		this->lasers[i] = nullptr;	
}

MiningBarge::MiningBarge(MiningBarge const &other) : _count(other._count)
{
	for (int i = 0; i < other._count; i++)
		this->lasers[i] = other.lasers[i];
	for (int i = 0; i < 4; i++)
		this->lasers[i] = nullptr;	
}

MiningBarge &MiningBarge::operator=(MiningBarge const &other)
{
	for (int i = 0; i < this->_count; i++)
		delete this->lasers[i];	
	for (int i = 0; i < other._count; i++)
		this->lasers[i] = other.lasers[i];
	for (int i = 0; i < 4; i++)
		this->lasers[i] = nullptr;
	this->_count = other._count;
	return (*this);
}

MiningBarge::~MiningBarge()
{
}

void MiningBarge::equip(IMiningLaser *lsr)
{
	if (lsr != nullptr && this->_count < 4)
	{
		this->lasers[this->_count] = lsr;
		this->_count++;
	}
}

void MiningBarge::mine(IAsteroid *ast) const
{
	if (ast != nullptr)
	{
		for (int i = 0; i < this->_count; i++)
			this->lasers[i]->mine(ast);	
	}
}