/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 16:43:43 by fulldemo          #+#    #+#             */
/*   Updated: 2020/09/11 16:29:40 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(char const *str)
{
	ScalarConverter::strClassification(str);
	this->_Char = ScalarConverter::convereterToChar();
	this->_Int = ScalarConverter::converterToInt();
	this->_Float = ScalarConverter::converterToFloat();
	this->_Double = ScalarConverter::converterToDouble();
}	

ScalarConverter::ScalarConverter(ScalarConverter const &other) : _ss(other.getSs())
{
	this->_Char = other.getChar();
	this->_Int = other.getInt();
	this->_Float = other.getFloat();
	this->_Double = other.getDouble();
	this->_displayable = other.getDisplayable();
	this->_point = other.getPoint();
	this->_type = other.getType();
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &other)
{
	this->_Char = other.getChar();
	this->_Int = other.getInt();
	this->_Float = other.getFloat();
	this->_Double = other.getDouble();
	this->_displayable = other.getDisplayable();
	this->_point = other.getPoint();
	this->_type = other.getType();
	return (*this);
}

ScalarConverter::~ScalarConverter()
{
}

void ScalarConverter::strClassification(char const *str)
{
	int len = strlen(str);
	int i = 0;
	this->_point = 0;
	
	if (str[0] == '-' && len > 1)
	{
		this->_ss << str[0];
		i++;
	}
	while(isdigit(str[i]) || str[i] == '.')
	{
		if (str[i] == '.')
			this->_point++;
		this->_ss << str[i] ;
		i++;
	}
	if (str[i] == 'f' && str[i + 1] == '\0' && len > 1)
	{
		this->_ss << str[i];
		i++;
		this->_type = "float";
	}
	if (i < len || this->_point > 1)
		this->_type = "impossible";
	if (this->_point == 1 && this->_type != "float" && this->_type != "impossible")
		this->_type = "double";
	if (!strcmp(str, "-inff") || !strcmp(str, "+inff") || !strcmp(str, "nanf")) 
	{
		if (!strcmp(str, "-inff"))
			str++;
		this->_ss << str;
		this->_type = "float";
	}
	if (!strcmp(str, "-inf") || !strcmp(str, "+inf") || !strcmp(str, "nan"))
	{
		if (!strcmp(str, "-inf"))
			str++;
		this->_ss << str;
		this->_type = "double";
	}
	if (len == 1)
	{
		if ((this->_displayable = isprint(str[0])) && (i == 0 || this->_point))
		{
			if (!this->_point)
				this->_ss << str;
			this->_type = "char";
		}
	}
	if (len == i && this->_type != "impossible" && this->_type != "double" && this->_type != "float" && this->_type != "char")
		this->_type = "int";
}

char ScalarConverter::convereterToChar()
{
	if (this->_type == "impossible")
		return ('\0');
	else if (this->_type == "char")
		return (static_cast<char>(this->_ss.str()[0]));
	else
	{
		std::stringstream tmp(this->_ss.str());
		int n;
		tmp >> n;
		if ((this->_displayable = isprint(n)))
			return (static_cast<char>(n));
	}
	return ('\0');
}

int  ScalarConverter::converterToInt()
{
	std::stringstream tmp(this->_ss.str());
	long int n;
	tmp >> n;
	if (this->_type == "impossible")
		return (0);
	else if (this->_type == "int")
	{
		if (n >= INT_MIN && n <= INT_MAX)
			return (static_cast<int>(n));
		else
			return (0);
	}
	else if (this->_type == "char")
		return (static_cast<int>(this->_ss.str()[0]));
	else
	{
		if (this->_ss.str() == "-inff" || this->_ss.str() == "+inff" || this->_ss.str() == "nanf" ||
			this->_ss.str() == "-inf" || this->_ss.str() == "+inf" || this->_ss.str() == "nan")
			return (0);
		else
		{
			if (n >= INT_MIN && n <= INT_MAX)
				return (static_cast<int>(n));
			else
				return (0);
		}
	}
	return (static_cast<int>(n));
}

float ScalarConverter::converterToFloat()
{		
	if (this->_type == "impossible")
		return (static_cast<float>(0));
	else if (this->_type == "float" || this->_type == "double")
	{
		std::stringstream tmp(this->_ss.str().erase(this->_ss.str().length() - 1));
		long double n;
		tmp >> n;
		if (this->_ss.str() == "-inff" || this->_ss.str() == "-inf")
			return (static_cast<float>(-1.0/0));
		else if (this->_ss.str() == "+inff" || this->_ss.str() == "+inf")
			return (static_cast<float>(1.0/0));
		else if (this->_ss.str() == "nanf" || this->_ss.str() == "nan")
			return (static_cast<float>(sqrt(-1.0)));
	}
	else if (this->_type == "char")
		return (static_cast<float>(this->_ss.str()[0]));
	if (this->_type == "float")
	{
		std::stringstream tmp(this->_ss.str().erase(this->_ss.str().length() - 1));
		long double n;
		tmp >> n;
		return (static_cast<float>(n));
	}
	else
	{
		std::stringstream tmp(this->_ss.str());
		long double n;
		tmp >> n;
		return (static_cast<float>(n));
	}
	return (static_cast<float>(0));
}

double ScalarConverter::converterToDouble()
{
	if (this->_type == "impossible")
		return (static_cast<double>(0));
	else if (this->_type == "double" || this->_type == "float")
	{
		std::stringstream tmp(this->_ss.str());
		long double n;
		tmp >> n;
		if (this->_ss.str() == "-inf" || this->_ss.str() == "-inff")
			return (static_cast<double>(-1.0/0));
		else if (this->_ss.str() == "+inf" || this->_ss.str() == "+inff")
			return (static_cast<double>(1.0/0));
		else if (this->_ss.str() == "nan" || this->_ss.str() == "nanf")
			return (static_cast<double>(sqrt(-1.0)));
	}
	else if (this->_type == "char")
		return (static_cast<double>(this->_ss.str()[0]));
	if (this->_type == "float")
	{
		std::stringstream tmp(this->_ss.str().erase(this->_ss.str().length() - 1));
		long double n;
		tmp >> n;
		return (static_cast<double>(n));
	}
	else
	{
		std::stringstream tmp(this->_ss.str());
		long double n;
		tmp >> n;
		return (static_cast<double>(n));
	}
	return (static_cast<double>(0));	
}

char ScalarConverter::getChar() const
{
	return (this->_Char);
}

int ScalarConverter::getInt() const
{
	return (this->_Int);
}

float ScalarConverter::getFloat() const
{
	return (this->_Float);
}

double ScalarConverter::getDouble() const
{
	return (this->_Double);
}

std::string ScalarConverter::getType() const
{
	return (this->_type);
}

bool ScalarConverter::getDisplayable() const
{
	return (this->_displayable);
}

std::string ScalarConverter::getSs() const
{
	return (this->_ss.str());
}

int ScalarConverter::getPoint() const
{
	return (this->_point);
}

std::ostream &operator<<(std::ostream &out, ScalarConverter const &other)
{
	std::stringstream tmp(other.getSs());
	long int n;
	tmp >> n;

	if (other.getType() == "impossible")
	{
		out << "char: impossible" << std::endl;
		out << "int: impossible" << std::endl;
		out << "float: impossible" << std::endl;
		out << "double: impossible" << std::endl;
		return (out);
	}
	if (other.getFloat() == (float)-1.0/0 || other.getFloat() == (float)1.0/0 || other.getSs() == "nan" ||
		other.getSs() == "nanf" || n < INT_MIN || n > INT_MAX)
	{
		out << "char: impossible" << std::endl;
		out << "int: impossible" << std::endl;
		out << "float: " << other.getFloat() << "f" << std::endl;
		out << "double: " << other.getDouble() << std::endl;
		return (out);
	}
	else if (!other.getDisplayable())
	{
		if ((other.getDouble() < 33 && other.getDouble() >= 0) || other.getDouble() == 127)
			out << "char: Non displayable" << std::endl;
		else
			out << "char: impossible" << std::endl;
		out << "int: " << other.getInt() << std::endl;
	}
	else
	{
		out << "char: " << other.getChar() << std::endl;
		out << "int: " << other.getInt() << std::endl;
	}
	if (other.getPoint() && (other.getSs()[other.getSs().length() - 1] != '.' && other.getSs()[other.getSs().length() - 1] != '0'))
	{
		out << "float: " << other.getFloat() << "f" << std::endl;
		out << "double: " << other.getDouble() << std::endl;
	}
	else
	{
		out << "float: " << other.getFloat() << ".0f" << std::endl;
		out << "double: " << other.getDouble() << ".0" << std::endl;
	}
	return (out);
}