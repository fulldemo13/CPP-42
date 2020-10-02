/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 19:29:00 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/13 20:07:08 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const &name) : _hitPoints(100), _maxHitPoints(100), _energyPoints(50), _maxEnergyPoints(50), _level(1),
_name(name), _meleeAttackDamage(20), _rangedAttackDamage(15), _armorDamageReduction(3)
{
	std::cout << "SC4V-TP <" << this->_name << "> says: \"Protecting the door\"." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &other) : _hitPoints(other._hitPoints), _maxHitPoints(other._maxHitPoints), _energyPoints(other._energyPoints),
_maxEnergyPoints(other._maxEnergyPoints), _level(other._level), _name(other._name), _meleeAttackDamage(other._meleeAttackDamage),
_rangedAttackDamage(other._rangedAttackDamage), _armorDamageReduction(other._armorDamageReduction)
{
	std::cout << "SC4V-TP <" << this->_name << "> says: \"Protecting the door\"." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "SC4V-TP <" << this->_name << "> says: \"The door is free\"." << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &other)
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

void	ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "SC4G-TP <" << this->_name << "> made a range attack to <" << target << ">, causing <" << this->_rangedAttackDamage << "> points of damage!" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "SC4G-TP <" << this->_name << "> made a melee attack to <" << target << ">, causing <" << this->_meleeAttackDamage << "> points of damage!" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	this->_hitPoints = this->_hitPoints - amount + this->_armorDamageReduction;
	if (this->_hitPoints <= 0)
		this->_hitPoints = 0;
	if (this->_hitPoints > this->_maxHitPoints)
		this->_hitPoints = this->_maxHitPoints;
	std::cout << "SC4G-TP <" << this->_name << "> received <" << amount << "> points of damage. It has " << this->_hitPoints << " hit points." << std::endl;

}

void	ScavTrap::beRepaired(unsigned int amount)
{
	this->_hitPoints += amount;
	if (this->_hitPoints > this->_maxHitPoints)
		this->_hitPoints = this->_maxHitPoints;
	std::cout << "SC4G-TP <" << this->_name << "> has repaired <" << amount << "> hit points. It has <" << this->_hitPoints << "> hit points." << std::endl;
}

void	ScavTrap::challengeNewcomer(std::string const &target)
{
	std::string challenges[5] = {"Come to me, but with your face uncoverd!", "Come, come. Try to be safe.", "Are you looking for troubles?!", "Eyyy you!. Stay at home!", "Come here!"};
	std::cout << "SC4G-TP <" << this->_name << "> says: <" << challenges[rand() % 5] << "> to <" << target << ">." << std::endl; 
}