/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 18:29:50 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/27 10:20:18 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	private:
		Character();
		std::string _name;
		int _ap;
		AWeapon *_awp;

	public:
		Character(std::string const &name);
		Character(Character const &other);
		Character &operator=(Character const &other);
		virtual ~Character();
		void recoverAP();
		void equip(AWeapon *awp);
		void attack(Enemy *e);
		std::string const &getName() const;
		int getAP() const;
		AWeapon *getAwp() const;
};

std::ostream &operator<<(std::ostream &out, Character const &chr);

#endif