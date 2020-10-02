/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 16:30:35 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/27 10:55:28 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jom = new AssaultTerminator;
	ISpaceMarine* jim;
	jim = jom;
	ISquad* vlc = new Squad;

	vlc->push(bob);
	vlc->push(jim);
	vlc->push(bob);
	vlc->push(NULL);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	
	delete vlc;
	std::cout << "////////////////////////////////" << std::endl;

	ISpaceMarine* bab = new TacticalMarine;
	ISpaceMarine* jam = new AssaultTerminator;
	ISpaceMarine* beb = new TacticalMarine;
	ISpaceMarine* jem = new AssaultTerminator;
	ISpaceMarine* bub = new TacticalMarine;
	ISpaceMarine* jum = new AssaultTerminator;

	ISquad* big = new Squad;

	big->push(bab);
	big->push(jam);
	big->push(beb);
	big->push(jem);
	big->push(bub);
	big->push(jum);
	big->push(nullptr);
	big->getUnit(100);
	std::cout << big->getCount() << " Units in squad" << std::endl;

	delete big;
	return 0;
}