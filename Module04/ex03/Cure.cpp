/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 16:56:26 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/27 11:05:16 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(Cure const &other) : AMateria(other._type)
{
	this->_xp = other._xp;
}

Cure &Cure::operator=(Cure const &other)
{
	this->_xp = other._xp;
	return (*this);
}

Cure::~Cure()
{
}

AMateria* Cure::clone() const
{
	Cure *cpy = new Cure(*this);
	return (cpy);
}

void Cure::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}