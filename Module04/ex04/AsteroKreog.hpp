/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AsteroKreog.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 17:24:00 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/24 17:34:48 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASTEROKREOG_HPP
# define ASTEROKREOG_HPP

# include "IAsteroid.hpp"

class AsteroKreog : public IAsteroid
{
	public:
		AsteroKreog();
		AsteroKreog(AsteroKreog const &other);
		AsteroKreog &operator=(AsteroKreog const &other);
		virtual ~AsteroKreog();
		std::string beMined(StripMiner *sm) const;
		std::string beMined(DeepCoreMiner *dm) const;
		std::string getName() const;
};

#endif