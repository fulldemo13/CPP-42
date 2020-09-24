/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/26 10:34:54 by fulldemo          #+#    #+#             */
/*   Updated: 2020/05/26 10:42:48 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void contact::set_str(std::string str, std::string value)
{
	if (!str.compare("first_name"))
		first_name = value;
	else if (!str.compare("last_name"))
		last_name = value;
	else if (!str.compare("nickname"))
		nickname = value;
	else if (!str.compare("login"))
		login = value;
	else if (!str.compare("postal_address"))
		postal_address = value;
	else if (!str.compare("email"))
		email = value;
	else if (!str.compare("phone_number"))
		phone_number = value;
	else if (!str.compare("birthday_date"))
		bithday_date = value;
	else if (!str.compare("favorite_meal"))
		favorite_meal = value;
	else if (!str.compare("underwear_color"))
		underwear_color = value;
	else if (!str.compare("darkest_secret"))
		darkest_secret = value;
}

std::string contact::get_str(std::string str)
{
	if (!str.compare("first_name"))
		return (first_name);
	else if (!str.compare("last_name"))
		return (last_name);
	else if (!str.compare("nickname"))
		return (nickname);
	else if (!str.compare("login"))
		return (login);
	else if (!str.compare("postal_address"))
		return (postal_address);
	else if (!str.compare("email"))
		return (email);
	else if (!str.compare("phone_number"))
		return (phone_number);
	else if (!str.compare("birthday_date"))
		return (bithday_date);
	else if (!str.compare("favorite_meal"))
		return (favorite_meal);
	else if (!str.compare("underwear_color"))
		return (underwear_color);
	else if (!str.compare("darkest_secret"))
		return (darkest_secret);
	return ("fail");
}