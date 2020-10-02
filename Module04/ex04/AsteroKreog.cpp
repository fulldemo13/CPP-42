/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AsteroKreog.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 16:17:16 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/24 17:39:37 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AsteroKreog.hpp"

AsteroKreog::AsteroKreog()
{
}

AsteroKreog::AsteroKreog(AsteroKreog const &other)
{
	(void)other;
}

AsteroKreog &AsteroKreog::operator=(AsteroKreog const &other)
{
	(void)other;
	return(*this);
}

AsteroKreog::~AsteroKreog()
{
}

std::string AsteroKreog::getName() const
{
	return ("AsteroKreog");
}

std::string AsteroKreog::beMined(DeepCoreMiner *dm) const
{
	(void)dm;
	return ("Mithril");
}

std::string AsteroKreog::beMined(StripMiner *sm) const
{
	(void)sm;
	return ("Tartarite");
}
