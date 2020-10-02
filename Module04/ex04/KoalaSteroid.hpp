/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   KoalaSteroid.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 17:25:58 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/24 17:32:29 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KOALASTEROID_HPP
# define KOALASTEROID_HPP

# include "IAsteroid.hpp"

class  KoalaSteroid : public IAsteroid
{
	public:
		KoalaSteroid();
		KoalaSteroid(KoalaSteroid const &other);
		KoalaSteroid &operator=(KoalaSteroid const &other);
		virtual ~ KoalaSteroid();
		std::string beMined(StripMiner *sm) const;
		std::string beMined(DeepCoreMiner *dm) const;
		std::string getName() const;
};

#endif