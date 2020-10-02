/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    KoalaSteroid.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 16:10:44 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/24 17:40:00 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "KoalaSteroid.hpp"

KoalaSteroid::KoalaSteroid()
{
}

KoalaSteroid::KoalaSteroid(KoalaSteroid const &other)
{
	(void)other;
}

KoalaSteroid &KoalaSteroid::operator=(KoalaSteroid const &other)
{
	(void)other;
	return (*this);
}

KoalaSteroid::~KoalaSteroid()
{
}

std::string KoalaSteroid::getName() const
{
	return ("KoalaSteroid");
}

std::string KoalaSteroid::beMined(DeepCoreMiner *dm) const
{
	(void)dm;
	return ("Dragonite");
}

std::string KoalaSteroid::beMined(StripMiner *sm) const
{
	(void)sm;
	return ("Flavium");
}
