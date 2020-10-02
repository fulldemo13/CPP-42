/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 17:29:49 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/27 10:23:11 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy
{
	private:
		Enemy();
		
	protected:
		int _hp;
		std::string _type;
	
	public:
		Enemy(int hp, std::string const &type);
		Enemy(Enemy const &other);
		Enemy &operator=(Enemy const &other);
		virtual ~Enemy();
		std::string const &getType() const;
		int getHP() const;
		virtual void takeDamage(int dmg);
};

#endif