/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 19:31:40 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/08 15:17:18 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRIAN_HPP
# define BRIAN_HPP

# include <string>
# include <iostream>

class Brain
{
	public:
		Brain();
		~Brain();
		std::string identify(void);
		
	private:
		int knowledge;
};
#endif