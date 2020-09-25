/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 15:42:19 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/08 18:05:32 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <string>
# include <iostream>
# include <fstream>
# include <sstream>

class Replace
{
	public:
		Replace(std::string filename, std::string s1, std::string s2);
		~Replace();
		
	private:
		void newfile(void);
		int	check(void);
		std::string	lineReplace(std::string line);
		std::string _filename;
		std::string _s1;
		std::string _s2;
};
#endif
