/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 18:32:59 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/10 17:20:09 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <cmath>
# include <iostream>

class Fixed
{
	private:
		int	b;
		static const int w = 8;
		
	public:
		Fixed();
		Fixed(const Fixed& other);
		Fixed(const int i);
		Fixed(const float f);
		~Fixed();
		Fixed &operator=(const Fixed& other);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int	toInt(void) const;
};

std::ostream &operator<<(std::ostream& os, const Fixed& obj);

#endif
