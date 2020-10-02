/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 16:54:52 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/20 16:09:49 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string const &name) : NinjaTrap(), FragTrap()
{
	this->_hitPoints = this->FragTrap::_hitPoints;
	this->_maxHitPoints = this->FragTrap::_maxHitPoints;
	this->_energyPoints = this->NinjaTrap::_energyPoints;
	this->_maxEnergyPoints = this->NinjaTrap::_maxEnergyPoints;
	this->_level = 1;
	this->_name = name;
	this->_meleeAttackDamage = this->NinjaTrap::_meleeAttackDamage;
	this->_rangedAttackDamage = this->FragTrap::_rangedAttackDamage;
	this->_armorDamageReduction = this->FragTrap::_armorDamageReduction;

	std::cout << "SUPER-TP <" << this->_name << "> has Superarrived." << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &other) : NinjaTrap(other._name), FragTrap(other._name)
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

	std::cout << "SUPER-TP <" << this->_name << "> has Superarrived." << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "SUPER-TP <" << this->_name << "> has gone." << std::endl;
}

void SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
}

void	SuperTrap::vaulthunter_dot_exe(std::string const &target)
{
	FragTrap::vaulthunter_dot_exe(target);
}

void	SuperTrap::ninjaShoebox(FragTrap &target)
{
	NinjaTrap::ninjaShoebox(target);
}

void	SuperTrap::ninjaShoebox(ScavTrap &target)
{
	NinjaTrap::ninjaShoebox(target);
}

void	SuperTrap::ninjaShoebox(NinjaTrap &target)
{
	NinjaTrap::ninjaShoebox(target);
}
