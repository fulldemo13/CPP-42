/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 16:31:39 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/20 15:48:47 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	srand (time(NULL));
	FragTrap robot1("Jonhy");
	
	robot1.rangedAttack("Willy");
	robot1.meleeAttack("Willy");
	robot1.takeDamage(130);
	robot1.beRepaired(200);
	robot1.takeDamage(0);
	robot1.takeDamage(42);
	robot1.vaulthunter_dot_exe("Willy");
	robot1.vaulthunter_dot_exe("Willy");
	robot1.vaulthunter_dot_exe("Willy");
	robot1.vaulthunter_dot_exe("Willy");
	robot1.vaulthunter_dot_exe("Willy");
	
	return (0);
}