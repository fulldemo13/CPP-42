/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 16:10:22 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/07 18:40:52 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
	public:
		Zombie();
		Zombie(std::string name, std::string type);
		~Zombie(void);
		void	setZombie(std::string name, std::string type);
		void	advert(void);
		void	announce(void);
	
	private:
		std::string _name;
		std::string _type;
};

#endif