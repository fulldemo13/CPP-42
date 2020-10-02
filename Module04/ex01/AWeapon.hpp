/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 16:40:35 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/27 10:17:50 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>
# include <string>

class AWeapon
{
	private:
		AWeapon();
		
	protected:
		std::string	_name;
		int	_apcost;
		int _damage;

	public:
		AWeapon(std::string const &name, int apcost, int damage);
		AWeapon(AWeapon const &other);
		AWeapon &operator=(AWeapon const &other);
		virtual ~AWeapon();
		std::string const &getName() const;
		int getAPCost() const;
		int getDamage() const;
		virtual void attack() const = 0;
};

#endif