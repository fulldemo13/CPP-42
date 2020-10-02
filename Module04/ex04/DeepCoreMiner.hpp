/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DeepCoreMiner.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 15:47:05 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/24 17:45:02 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEEPCOREMINER_HPP
# define DEEPCOREMINER_HPP

# include "IMiningLaser.hpp"

class DeepCoreMiner: public IMiningLaser
{
	public:
		DeepCoreMiner();
		DeepCoreMiner(DeepCoreMiner const &other);
		DeepCoreMiner &operator=(DeepCoreMiner const &other);
		virtual ~DeepCoreMiner();
		void mine(IAsteroid *ast);
};

#endif