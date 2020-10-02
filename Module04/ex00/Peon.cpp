/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 18:10:13 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/27 10:12:46 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string const &name) : Victim(name)
{
		std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const &other) : Victim(other._name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon &Peon::operator=(Peon const &other)
{
	this->_name = other._name;
	return (*this);
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
}