/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 17:23:08 by fulldemo          #+#    #+#             */
/*   Updated: 2020/05/26 11:17:35 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

std::string	cut_str(std::string str)
{
	std::string cut;

	if (str.length() > 10)
	{
		cut = str.replace(9, str.length() - 1, ".");
		return (cut);
	}
	return (str);
}

void		create(contact *page, std::string text,  std::string str)
{
	std::string read;

	std::cout << text;
	std::getline (std::cin, read);
	page->set_str(str, read);
}

contact 	create_list_contact()
{
	contact page;
	
	std::cout << "+" << std::setfill('-') << std::setw(44) << "+" << std::endl;
	create(&page, "Insert first name: ", "first_name");
	create(&page, "Insert last name: ", "last_name");
	create(&page, "Insert nickname: ", "nickname");
	create(&page, "Insert login: ", "login");
	create(&page, "Insert postal address: ", "postal_address");
	create(&page, "Insert email: ", "email");
	create(&page, "Insert phone number: ", "phone_number");
	create(&page, "Insert birthday date: ", "birthday_date");
	create(&page, "Insert favorite meal: ", "favorite_meal");
	create(&page, "Insert underwear color: ", "underwear_color");
	create(&page, "Insert darkest secret: ", "darkest_secret");
	std::cout << "Contact added!" << std::endl;
	std::cout << "+" << std::setfill('-') << std::setw(44) << "+" << std::endl;
	return (page);
}

void		show_contact(contact page)
{
	std::cout << "+" << std::setfill('-') << std::setw(44) << "+" << std::endl;
	std::cout << "First name:\t\t" << page.get_str("first_name") << std::endl;
	std::cout << "Last name:\t\t" << page.get_str("last_name") << std::endl;
	std::cout << "Nickname:\t\t" << page.get_str("nickname") << std::endl;
	std::cout << "Login:\t\t\t" << page.get_str("login") << std::endl;
	std::cout << "Postal address:\t\t" << page.get_str("postal_address") << std::endl;
	std::cout << "Email:\t\t\t" << page.get_str("email") << std::endl;
	std::cout << "Phone number:\t\t" << page.get_str("phone_number") << std::endl;
	std::cout << "Birthday date:\t\t" << page.get_str("birthday_date") << std::endl;
	std::cout << "Favorite meal:\t\t" << page.get_str("favorite_meal") << std::endl;
	std::cout << "Underwear color:\t" << page.get_str("underwear_color") << std::endl;
	std::cout << "Darkest secret:\t\t" << page.get_str("darkest_secret") << std::endl;
	std::cout << "+" << std::setfill('-') << std::setw(44) << "+" << std::endl;
}

int			show_list(contact *pages, int index)
{
	int		i;
	char	c;

	i  = 0;
	std::cout << "+" << std::setfill('-') << std::setw(44) << "+" << std::endl;
	std::cout << "|" << std::setfill(' ') << std::setw(10) << "  INDEX  " << "|" << std::setw(10) << "FIRST N. " << "|" << std::setw(10) << " LAST N. " << "|" << std::setw(10) << "NICKNAME " << "|"<< std::endl;
	std::cout << "|" << std::setfill('-') << std::setw(11) << "+" << std::setfill('-') << std::setw(11) << "+" << std::setfill('-') << std::setw(11) << "+" << std::setfill('-') << std::setw(11) << "|"<< std::endl;
	while (i <= index)
	{
		c = i + '0' + 1;
		std::cout << "|" << std::setfill(' ') << std::setw(10) << c << "|" << std::setw(10) << cut_str(pages[i].get_str("first_name")) << "|" << std::setw(10) << cut_str(pages[i].get_str("last_name")) << "|" << std::setw(10) << cut_str(pages[i].get_str("nickname")) << "|" << std::endl;
		i++;
	}
	std::cout << "+" << std::setfill('-') << std::setw(44) << "+" << std::endl;
	return (i);
}

void 		search_contact(contact *pages, int index)
{
	int i;
	std::string order;

	i = show_list(pages, index);
	if (i > 0)
	{
		std::cout << "Choose the contact index to show:" << std::endl;
		std::getline (std::cin, order);
		i = order[0] - '0' - 1;
		if (i <= index && order.length() == 1 && i >= 0)
			show_contact(pages[i]);
		else
			std::cout << "Contanct doesn't exist" << std::endl << "==Commands are: ADD, SEARCH or EXIT==" << std::endl;
	}
}

void		overwrite_contact(contact *pages)
{
	std::string order;
	int	i;

	std::cout << "You have 8 contacts" << std::endl;
	show_list(pages, 7);
	std::cout << "What contact do you want to overwrite? Choose index: ";
	std::getline (std::cin, order);
	i = order[0] - '0' - 1;
	if (i <= 7 && order.length() == 1 && i >= 0)
		pages[i] = create_list_contact();
	else
		std::cout << "Contanct doesn't exist" << std::endl << "==Commands are: ADD, SEARCH or EXIT==" << std::endl;
}

int 		main()
{
	std::string order;
	contact pages[8];
	int i;

	i = -1;
	std::cout << "\n=========Welcome to your 42PHONEBOOK=========" << std::endl;
	std::cout << "========Commands: ADD, SEARCH or EXIT========" << std::endl;
	std::getline (std::cin, order);
	while (order.compare("EXIT"))
	{
		if (!order.compare("ADD"))
		{
			if (i < 7)
			{
				i++;
				pages[i] = create_list_contact();
			}
			else
				overwrite_contact(pages);
		}
		else if (!order.compare("SEARCH"))
			search_contact(pages, i);
		else
			std::cout << "========Commands: ADD, SEARCH or EXIT========" << std::endl;
		std::getline (std::cin, order);
	}
	return (0);
}