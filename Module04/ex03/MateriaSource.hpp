/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 18:43:00 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/23 19:16:46 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *_pocket[4];
		int _count;

	public:
		MateriaSource();
		MateriaSource(MateriaSource const &other);
		MateriaSource &operator=(MateriaSource const &other);
		virtual ~MateriaSource();
		void learnMateria(AMateria *m);
		AMateria* createMateria(std::string const & type);
};

#endif