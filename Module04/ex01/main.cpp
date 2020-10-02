/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 17:00:38 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/27 10:35:25 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int main()
{
	Character* me = new Character("me");

	std::cout << *me;

	Enemy* b = new RadScorpion();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);

	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	std::cout << "//////////////////////////////////////" << std::endl;
	Enemy *c = new SuperMutant();
	me->attack(c);
	std::cout << *me;
	me->attack(c);
	std::cout << *me;
	std::cout << "SuperMutantHP: " << c->getHP() << std::endl;
	me->attack(c);
	std::cout << *me;
	me->equip(pf);
	me->attack(c);
	std::cout << *me;
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	std::cout << *me;
	me->attack(c);
	std::cout << *me;
	std::cout << "SuperMutantHP: " << c->getHP() << std::endl;

	delete me;
	delete b;
	delete c;
	delete pr;
	delete pf;
	
	return 0;
}