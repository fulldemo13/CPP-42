/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 16:32:32 by fulldemo          #+#    #+#             */
/*   Updated: 2020/09/17 19:01:26 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <vector>
# include <list>
# include <deque>
# include <string>

template<typename T>
typename T::iterator easyfind(T &c, int n)
{
	return (std::find(c.begin(), c.end(), n));
}

#endif