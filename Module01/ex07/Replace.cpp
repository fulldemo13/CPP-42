/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 15:42:24 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/09 17:33:03 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(std::string filename, std::string s1, std::string s2) : _filename(filename), _s1(s1), _s2(s2)
{
	Replace::newfile();
}

Replace::~Replace()
{
}

int	Replace::check(void)
{
	if (this->_filename.length() == 0)
	{
		std::cout << "Filename empty." << std::endl;
		return (1);
	}
	else if (this->_s1.length() == 0)
	{
		std::cout << "s1 empty." << std::endl;
		return (1);
	}
	else if (this->_s2.length() == 0)
	{
		std::cout << "s2 empty." << std::endl;
		return (1);
	}
	return (0);
}

std::string	Replace::lineReplace(std::string line)
{
	std::stringstream	ss;
	int					j;
	int					s1len;

	s1len = this->_s1.length();

	for (size_t i = 0; i < line.length(); i++)
	{
		j = 0;
		while (line[i + j] == this->_s1[j] && j < s1len)
			j++;
		if (j == s1len)
		{
			ss << this->_s2;
			i += (j - 1);
		}
		else
			ss << line[i];
	}
	return (ss.str());
}

void	Replace::newfile()
{
	std::ifstream	file;
	std::ofstream	output;
	std::string		line;

	if (!Replace::check())
	{
		file.open(this->_filename);
		if (file.fail())
		{
			std::cout << "Open file failed." << std::endl;
			return;
		}
		output.open(this->_filename + ".replace");
		if (output.fail())
		{
			std::cout << "Open new file failed." << std::endl;
			file.close();
			return;
		}
		while (std::getline(file, line))
		{
			output << Replace::lineReplace(line);
			if (!file.eof())
				output << '\n';
		}
		file.close();
		output.close();
	}	
}