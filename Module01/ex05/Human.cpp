/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 19:59:37 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/08 20:01:02 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{
}

Human::~Human()
{
	this->_brain.~Brain();
}

std::string	Human::identify()
{
	return (this->_brain.Brain::identify());
}

Brain	&Human::getBrain()
{
	return (this->_brain);
}