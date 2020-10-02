/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 16:31:39 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/20 16:03:29 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
	srand (time(NULL));
	FragTrap frag("Jonhy");
	ScavTrap scav("Willy");
	NinjaTrap nin1("Chan");
	NinjaTrap nin2("Choon");
	
	scav.challengeNewcomer("Jonhy");
	frag.rangedAttack("Willy");
	scav.takeDamage(20);
	frag.meleeAttack("Willy");
	scav.takeDamage(30);
	scav.meleeAttack("Jonhy");
	frag.takeDamage(20);
	scav.rangedAttack("Jonhy");
	frag.takeDamage(15);
	frag.beRepaired(150);
	frag.vaulthunter_dot_exe("Willy");
	frag.vaulthunter_dot_exe("Willy");
	frag.vaulthunter_dot_exe("Willy");
	frag.vaulthunter_dot_exe("Willy");
	frag.vaulthunter_dot_exe("Willy");
	nin2.rangedAttack("Willy");
	nin2.takeDamage(20);
	nin2.meleeAttack("Willy");
	nin2.beRepaired(150);
	nin1.ninjaShoebox(frag);
	nin1.ninjaShoebox(scav);
	nin1.ninjaShoebox(nin2);
	nin1.ninjaShoebox(nin2);
	
	return (0);
}