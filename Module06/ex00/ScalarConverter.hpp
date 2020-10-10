/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 16:41:43 by fulldemo          #+#    #+#             */
/*   Updated: 2020/09/10 16:37:20 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <math.h>
# include <limits.h>
# include <float.h>

class ScalarConverter
{
	private:
		ScalarConverter();
		std::string _type;
		std::stringstream _ss;
		char _Char;
		int _Int;
		float _Float;
		double _Double;
		bool _displayable;
		int _point;
		void strClassification(char const *str);
		char convereterToChar();
		int  converterToInt();
		float converterToFloat();
		double converterToDouble();

	public:
		ScalarConverter(char const *str);
		ScalarConverter(ScalarConverter const &other);
		ScalarConverter &operator=(ScalarConverter const &other);
		virtual ~ScalarConverter();
		char getChar() const;
		int getInt() const;
		float getFloat() const;
		double getDouble() const;
		bool getDisplayable() const;
		std::string getType() const;
		std::string getSs() const;
		int getPoint() const;
};

std::ostream &operator<<(std::ostream &out, ScalarConverter const &other);

#endif