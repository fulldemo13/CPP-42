/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 11:29:36 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/08 12:26:52 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string const &type) : _type(type)
{
}

Weapon::~Weapon()
{
}

std::string	const &Weapon::getType(void) const
{
	return (this->_type);
}

void	Weapon::setType(std::string const &type)
{
	this->_type = type;
}