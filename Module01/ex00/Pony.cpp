/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 15:33:31 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/06 15:54:48 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, std::string colour, std::string location) : _name(name), _colour(colour), _location(location)
{
	std::cout << "My name is: " << colour << " " << name << " and I'm on " << location << "." << std::endl;
}

Pony::~Pony(void)
{
	std::cout << this->_name << " say bye." << std::endl;
}