/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 17:24:50 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/27 10:08:56 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class Victim
{
	protected:
		Victim();
		std::string _name;

	public:
		Victim(std::string const &name);
		Victim(Victim const &other);
		Victim &operator=(Victim const &other);
		virtual ~Victim();
		std::string const &getName(void) const;
		virtual void getPolymorphed(void) const;
};

std::ostream &operator<<(std::ostream &out, Victim const &vic);

#endif