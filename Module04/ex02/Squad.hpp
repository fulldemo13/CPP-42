/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 16:40:10 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/22 18:42:40 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"
# include <cstddef>

class Squad : public ISquad
{
	private:
		ISpaceMarine **_marines;
		int _count;

	public:
		Squad();
		Squad(Squad const &other);
		Squad &operator=(Squad const &other);
		virtual ~Squad();

		int getCount() const;
		ISpaceMarine* getUnit(int i) const;
		int push(ISpaceMarine *m);
};

#endif