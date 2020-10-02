/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 16:53:51 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/23 17:30:37 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad() : _marines(nullptr), _count(0)
{
}

Squad::Squad(Squad const &other) : _marines(nullptr), _count(0)
{
	this->_count = 0;
	for (int i = 0; i < other.getCount(); i++)
		this->push(other.getUnit(i)->clone());
}

Squad &Squad::operator=(Squad const &other)
{
	if (this->_marines)
	{
		for (int i = 0; i < this->_count; i++)
			delete this->_marines[i];
		delete this->_marines;
		this->_marines = nullptr;
	}
	this->_count = 0;
	for (int i = 0; i < other.getCount(); i++)
		this->push(other.getUnit(i)->clone());
	return (*this);
}

Squad::~Squad()
{
	if (this->_marines)
	{
		for (int i = 0; i < this->_count; i++)
			delete this->_marines[i];
		delete this->_marines;		
	}
}

int Squad::getCount() const
{
	return (this->_count);
}

ISpaceMarine *Squad::getUnit(int i) const
{
	if (this->_count == 0 || i < 0 || i >= this->_count)
		return (nullptr);
	return (this->_marines[i]);
}

int Squad::push(ISpaceMarine *m)
{
	if (!m)
		return (this->_count);
	if (this->_count == 0)
	{
		this->_marines = new ISpaceMarine*[1];
		this->_marines[0] = m;
		this->_count = 1;
	}
	else
	{
		for (int i = 0; i < this->_count ; i++)
			if (this->_marines[i] == m)
				return (this->_count);
		ISpaceMarine **tmp = new ISpaceMarine*[this->_count + 1];
		for (int i = 0; i < this->_count; i++)
			tmp[i] = this->_marines[i];
		tmp[this->_count] = m;
		this->_count++;
		delete[] this->_marines;
		this->_marines = tmp;
	}
	
	return (this->_count);
}