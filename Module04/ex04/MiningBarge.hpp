/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiningBarge.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 17:42:03 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/24 18:12:17 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MININGBARGE_HPP
# define MININGBARGE_HPP

# include "IAsteroid.hpp"
# include "IMiningLaser.hpp"

class MiningBarge
{
	private:
		int _count;
		IMiningLaser *lasers[4];
		
	public:
		MiningBarge();
		MiningBarge(MiningBarge const &other);
		MiningBarge &operator=(MiningBarge const &other);
		~MiningBarge();
		void equip(IMiningLaser *lsr);
		void mine(IAsteroid *ast) const;
};

#endif