/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DeepCoreMiner.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 15:50:01 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/24 17:01:02 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DeepCoreMiner.hpp"

DeepCoreMiner::DeepCoreMiner()
{
}

DeepCoreMiner::DeepCoreMiner(DeepCoreMiner const &other)
{
	(void)other;
}

DeepCoreMiner &DeepCoreMiner::operator=(DeepCoreMiner const &other)
{
	(void)other;
	return (*this);
}

DeepCoreMiner::~DeepCoreMiner()
{
}

void DeepCoreMiner::mine(IAsteroid *ast)
{
	if (ast != nullptr)
		std::cout << "* mining deep ... got " << ast->beMined(this) << " ! *" << std::endl;
}