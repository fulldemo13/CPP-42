/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 18:04:49 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/27 10:11:36 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon : public Victim
{
	private:
		Peon();
		
	public:
		Peon(std::string const &_name);
		Peon(Peon const &other);
		Peon &operator=(Peon const &other);
		virtual ~Peon();
		void getPolymorphed(void) const;
};


#endif