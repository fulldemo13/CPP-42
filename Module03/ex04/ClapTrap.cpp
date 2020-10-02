/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 20:14:01 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/15 16:16:17 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _hitPoints(0), _maxHitPoints(0), _energyPoints(0), _maxEnergyPoints(0), _level(0),
_name("name"), _meleeAttackDamage(0), _rangedAttackDamage(0), _armorDamageReduction(0)
{
	std::cout << "New CL4P-TP has arrived." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &other) : _hitPoints(other._hitPoints), _maxHitPoints(other._maxHitPoints), _energyPoints(other._energyPoints),
_maxEnergyPoints(other._maxEnergyPoints), _level(other._level), _name(other._name), _meleeAttackDamage(other._meleeAttackDamage),
_rangedAttackDamage(other._rangedAttackDamage), _armorDamageReduction(other._armorDamageReduction)
{
	std::cout << "New CL4P-TP has arrived." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "CL4P-TP removed." << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &other)
{
	this->_hitPoints = other._hitPoints;
	this->_maxHitPoints = other._maxHitPoints;
	this->_energyPoints = other._energyPoints;
	this->_maxEnergyPoints = other._maxEnergyPoints;
	this->_level = other._level;
	this->_name = other._name;
	this->_meleeAttackDamage = other._meleeAttackDamage;
	this->_rangedAttackDamage = other._rangedAttackDamage;
	this->_armorDamageReduction = other._armorDamageReduction;
	return (*this);
}

std::string ClapTrap::getName(void)
{
	return (this->_name);
}