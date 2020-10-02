/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 16:20:19 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/24 18:37:29 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "KoalaSteroid.hpp"
#include "AsteroKreog.hpp"
#include "StripMiner.hpp"
#include "DeepCoreMiner.hpp"
#include "MiningBarge.hpp"

int main()
{
	MiningBarge barge;
	
	IAsteroid *asteroid = new KoalaSteroid();
	IAsteroid *comet = new AsteroKreog();
	
	IMiningLaser *strip = new StripMiner();
	IMiningLaser *deep = new DeepCoreMiner();

	barge.equip(strip);
	barge.equip(deep);
	barge.equip(deep);
	barge.equip(strip);
	barge.equip(strip);
	barge.equip(nullptr);
	std::cout << asteroid->getName() << std::endl;
	barge.mine(asteroid);
	std::cout << comet->getName() << std::endl;
	barge.mine(comet);
	barge.mine(nullptr);

	delete strip;
	delete deep;
	delete asteroid;
	delete comet;
	return (0);
}