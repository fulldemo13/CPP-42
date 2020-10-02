/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 16:29:40 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/27 10:02:54 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include "Victim.hpp"
# include <iostream>
# include <string>

class Sorcerer
{
	private:
		Sorcerer();
		std::string _name;
		std::string _title;

	public:
		Sorcerer(std::string const &name, std::string const &title);
		Sorcerer(Sorcerer const &other);
		Sorcerer &operator=(Sorcerer const &other);
		virtual ~Sorcerer();
		std::string const &getName(void) const;
		std::string const &getTitle(void) const;
		void polymorph(Victim const &) const;
};

std::ostream &operator<<(std::ostream &out, Sorcerer const &sor);

#endif