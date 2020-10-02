/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 18:45:59 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/27 11:09:42 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _count(0)
{
	for (int i = 0; i < 4; i++)
		this->_pocket[i] = nullptr;
}

MateriaSource::MateriaSource(MateriaSource const &other) : _count(other._count)
{
	for (int i = 0; i < other._count; i++)
		this->_pocket[i] = other._pocket[i];
	for (int i = 0; i < 4; i++)
		this->_pocket[i] = nullptr;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &other)
{
	for (int i = 0; i < this->_count; i++)
		delete this->_pocket[i];
	this->_count = other._count;
	for (int i = 0; i < other._count; i++)
		this->_pocket[i] = other._pocket[i];
	for (int i = 0; i < 4; i++)
		this->_pocket[i] = nullptr;
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < this->_count; i++)
		delete this->_pocket[i];
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (this->_count == 4 || m == nullptr)
		return;
	for (int i = 0; i < this->_count; i++)
		if (this->_pocket[i] == m)
			return;
	this->_pocket[this->_count] = m;
	this->_count++;	
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < this->_count; i++)
		if (this->_pocket[i]->getType() == type)
			return (this->_pocket[i]->clone());
	return (nullptr);	
}