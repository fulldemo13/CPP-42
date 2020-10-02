/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 17:18:34 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/21 19:42:56 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist(PowerFist const &other) : AWeapon(other._name, other._apcost, other._damage)
{
}

PowerFist &PowerFist::operator=(PowerFist const &other)
{
	this->_name = other._name;
	this->_apcost = other._apcost;
	this->_damage = other._damage;
	return (*this);
}

PowerFist::~PowerFist()
{
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}