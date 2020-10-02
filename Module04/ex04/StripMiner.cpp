/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StripMiner.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 15:56:04 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/24 17:04:14 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StripMiner.hpp"

StripMiner::StripMiner()
{
}

StripMiner::StripMiner(StripMiner const &other)
{
	(void)other;
}

StripMiner &StripMiner::operator=(StripMiner const &other)
{
	(void)other;
	return (*this);
}

StripMiner::~StripMiner()
{
}

void StripMiner::mine(IAsteroid *ast)
{
	if (ast != nullptr)
		std::cout << "* strip mining ... got " << ast->beMined(this) << " ! *" << std::endl;
}