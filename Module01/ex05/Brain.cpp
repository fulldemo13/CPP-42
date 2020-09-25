/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 19:31:13 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/08 20:00:55 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>

Brain::Brain()
{
	this->knowledge = 0;
}

Brain::~Brain()
{
}

std::string Brain::identify(void)
{
	std::stringstream address;
    address << this;
    return (address.str());
}