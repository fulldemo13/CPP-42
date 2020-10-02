/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 15:55:10 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/20 16:06:37 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string const &name) : ClapTrap()
{
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_name = name;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;

	std::cout << "NINJ4-TP <" << this->_name << "> says: \"A ninja appeared\"." << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &other) : ClapTrap()
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
	
	std::cout << "NINJ4-TP <" << this->_name << "> says: \"A ninja appeared\"." << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "NINJ4-TP <" << this->_name << "> says: \"A ninja disappeared\"." << std::endl;
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &other)
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

void	NinjaTrap::rangedAttack(std::string const &target)
{
	std::cout << "NINJ4-TP <" << this->_name << "> attacks <" << target << "> at range, hurting <" << this->_rangedAttackDamage << "> points of damage!" << std::endl;
}

void	NinjaTrap::meleeAttack(std::string const &target)
{
	std::cout << "NINJ4-TP <" << this->_name << "> attacks <" << target << "> at melee, hurting <" << this->_meleeAttackDamage << "> points of damage!" << std::endl;
}

void	NinjaTrap::takeDamage(unsigned int amount)
{
	this->_hitPoints = this->_hitPoints - amount + this->_armorDamageReduction;
	if (this->_hitPoints <= 0)
		this->_hitPoints = 0;
	if (this->_hitPoints > this->_maxHitPoints)
		this->_hitPoints = this->_maxHitPoints;
	std::cout << "NINJ4-TP <" << this->_name << "> received <" << amount << "> points of damage. It has " << this->_hitPoints << " hit points." << std::endl;

}

void	NinjaTrap::beRepaired(unsigned int amount)
{
	this->_hitPoints += amount;
	if (this->_hitPoints > this->_maxHitPoints)
		this->_hitPoints = this->_maxHitPoints;
	std::cout << "NINJ4-TP <" << this->_name << "> has restored <" << amount << "> hit points. Now it has <" << this->_hitPoints << "> hit points." << std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap &target)
{
	this->_energyPoints -= 40;
	if (this->_energyPoints < 0)
		std::cout << "NINJ4-TP <" << this->_name << "> ran out energy points." << std::endl;
	else
		std::cout << "NINJ4-TP <" << this->_name << "> has made especial attack to FR4-TP <" << target.getName() << ">. Causing <" << this->_rangedAttackDamage << "> range damage. -OUUUCH!"<< std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap &target)
{
	this->_energyPoints -= 40;
	if (this->_energyPoints < 0)
		std::cout << "NINJ4-TP <" << this->_name << "> ran out energy points." << std::endl;
	else
		std::cout << "NINJ4-TP <" << this->_name << "> has made especial attack to SC4V-TP <" << target.getName() << ">. Causing <" << this->_meleeAttackDamage << "> melee damage. -Open that door!"<< std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap &target)
{
	this->_energyPoints -= 40;
	if (this->_energyPoints < 0)
		std::cout << "NINJ4-TP <" << this->_name << "> ran out energy points." << std::endl;
	else
		std::cout << "NINJ4-TP <" << this->_name << "> has try to make especial attack to NINJ4-TP <" << target.getName() << ">. -Hey bro, we're on the same team!"<< std::endl;
}