/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 16:48:52 by fulldemo          #+#    #+#             */
/*   Updated: 2020/09/10 18:23:14 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <string>
# include <stdlib.h>
# include <time.h>
# include <iostream>

struct Data
{
	std::string s1;
	int			n;
	std::string s2;
};

void *serialize(void);
Data *deserialize(void *raw);
#endif