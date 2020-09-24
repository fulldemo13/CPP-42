/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/21 15:51:04 by fulldemo          #+#    #+#             */
/*   Updated: 2020/05/26 11:20:55 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>

class contact
{
	public:

	void set_str(std::string str, std::string value);
	std::string get_str(std::string str);
	
	private:

	std::string first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	login;
	std::string	postal_address;
	std::string	email;
	std::string	phone_number;
	std::string	bithday_date;
	std::string	favorite_meal;
	std::string	underwear_color;
	std::string	darkest_secret;	
};
#endif