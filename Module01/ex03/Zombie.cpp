/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 16:03:57 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/08 20:01:13 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() 
{ 
	this->_type = "";
	this->_name = "";
}

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
{
	this->advert();
}

Zombie::~Zombie(void)
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> Brain not found. Goodbye buddy!" << std::endl; 
}

void	Zombie::setZombie(std::string name, std::string type)
{
	this->_name = name;
	this->_type = type;
}

void	Zombie::advert(void)
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> Braiiiiiiinnnssss ..." << std::endl; 
}

void Zombie::announce(void)
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> Hi my name is: " << this->_name << ". I'm looking for brians." << std::endl;
}