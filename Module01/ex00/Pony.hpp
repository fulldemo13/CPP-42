/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 15:33:44 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/06 15:53:40 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <string>

class Pony
{
	public:
		Pony(std::string name, std::string colour, std::string location);
		~Pony(void);
	
	private:
		std::string	_name;
		std::string _colour;
		std::string _location;
};

#endif