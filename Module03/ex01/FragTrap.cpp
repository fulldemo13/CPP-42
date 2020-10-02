/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 16:20:50 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/13 20:07:17 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string const &name) : _hitPoints(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100), _level(1),
_name(name), _meleeAttackDamage(30), _rangedAttackDamage(20), _armorDamageReduction(5)
{
	std::cout << "FR4G-TP <" << this->_name << "> says: \"Hello\"." << std::endl;
}

FragTrap::FragTrap(FragTrap const &other) : _hitPoints(other._hitPoints), _maxHitPoints(other._maxHitPoints), _energyPoints(other._energyPoints),
_maxEnergyPoints(other._maxEnergyPoints), _level(other._level), _name(other._name), _meleeAttackDamage(other._meleeAttackDamage),
_rangedAttackDamage(other._rangedAttackDamage), _armorDamageReduction(other._armorDamageReduction)
{
	std::cout << "FR4G-TP <" << this->_name << "> says: \"Hello\"." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP <" << this->_name << "> says: \"Goodbye\"." << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &other)
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

void	FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP <" << this->_name << "> attacks <" << target << "> at range, causing <" << this->_rangedAttackDamage << "> points of damage!" << std::endl;
}

void	FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP <" << this->_name << "> attacks <" << target << "> at melee, causing <" << this->_meleeAttackDamage << "> points of damage!" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	this->_hitPoints = this->_hitPoints - amount + this->_armorDamageReduction;
	if (this->_hitPoints <= 0)
		this->_hitPoints = 0;
	if (this->_hitPoints > this->_maxHitPoints)
		this->_hitPoints = this->_maxHitPoints;
	std::cout << "FR4G-TP <" << this->_name << "> received <" << amount << "> points of damage. It has " << this->_hitPoints << " hit points." << std::endl;

}

void	FragTrap::beRepaired(unsigned int amount)
{
	this->_hitPoints += amount;
	if (this->_hitPoints > this->_maxHitPoints)
		this->_hitPoints = this->_maxHitPoints;
	std::cout << "FR4G-TP <" << this->_name << "> has repaired <" << amount << "> hit points. It has <" << this->_hitPoints << "> hit points." << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	std::string attacks[5] = {"Spontiack!", "POWNNN", "Zaaaaasca!", "KAPOW!", "BAAAANG!"};
	int attack;
	
	attack = rand() % 5;
	this->_energyPoints -= 25;
	if (this->_energyPoints < 0)
		std::cout << "FR4G-TP <" << this->_name << "> doesn't have enough energy points." << std::endl;
	else
		std::cout << "FR4G-TP <" << this->_name << "> " << attacks[attack] << " <" << target << "> causing <" << (attack + 1) * 10 << "> points of damage!" << std::endl;

}