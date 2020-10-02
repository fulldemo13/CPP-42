/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 17:27:01 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/27 10:09:35 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string const &name)
{
	this->_name = name;
	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::Victim(Victim const &other)
{
	this->_name = other._name;
	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim &Victim::operator=(Victim const &other)
{
	this->_name = other._name;
	return (*this);
}

Victim::~Victim()
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

std::string const &Victim::getName(void) const
{
	return (this->_name);
}

std::ostream &operator<<(std::ostream &out, Victim const &vic)
{
	out << "I'm " << vic.getName() << " and I like otters!" << std::endl;
	return (out);
}

void Victim::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}