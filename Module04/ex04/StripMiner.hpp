/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StripMiner.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 15:53:49 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/24 17:02:24 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRIPMINER_HPP
# define STRIPMINER_HPP

# include <iostream>
# include "IMiningLaser.hpp"
# include "IAsteroid.hpp"

class StripMiner : public IMiningLaser
{
	public:
		StripMiner();
		StripMiner(StripMiner const &other);
		StripMiner &operator=(StripMiner const &other);
		virtual ~StripMiner();
		void mine(IAsteroid *ast);
};

#endif