/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 16:35:22 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/27 10:06:17 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string const &name, std::string const &title)
{
	this->_name = name;
	this->_title = title;
	std::cout << this->_name << ", " << this->_title << " is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &other)
{
	this->_name = other._name;
	this->_title = other._title;
	std::cout << this->_name << ", " << this->_title << " is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << this->_name << ", " << this->_title << " is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer &Sorcerer::operator=(Sorcerer const &other)
{
	this->_name = other._name;
	this->_title = other._title;
	return (*this);
}

std::string const &Sorcerer::getName(void) const
{
	return (this->_name);
}

std::string const &Sorcerer::getTitle(void) const
{
	return (this->_title);
}

std::ostream &operator<<(std::ostream &out, Sorcerer const &sor)
{
	out << "I am " << sor.getName() << ", " << sor.getTitle() << ", and I like ponies!" << std::endl;
	return (out);
}

void Sorcerer::polymorph(Victim const &vic) const
{
	vic.getPolymorphed();
}