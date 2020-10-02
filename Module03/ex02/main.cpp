/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 16:31:39 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/14 20:16:56 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
	srand (time(NULL));
	FragTrap frag("Jonhy");
	ScavTrap scav("Willy");
	
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
	
	return (0);
}