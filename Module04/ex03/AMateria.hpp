/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 16:24:09 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/27 10:59:43 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include <iostream>
class AMateria;
# include "ICharacter.hpp"

class AMateria
{
	private:
		AMateria();
		
	protected:
		unsigned int _xp;
		std::string _type;
		
	public:
		AMateria(std::string const & type);
		virtual ~AMateria();
		std::string const & getType() const;
		unsigned int getXP() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif