/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 15:50:28 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/20 16:00:00 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap: virtual public ClapTrap
{
	public:
		NinjaTrap(std::string const &name);
		NinjaTrap(NinjaTrap const &other);
		virtual ~NinjaTrap();
		NinjaTrap &operator=(NinjaTrap const &other);
		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void ninjaShoebox(FragTrap &target);
		void ninjaShoebox(ScavTrap &target);
		void ninjaShoebox(NinjaTrap &target);
};

#endif