/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 18:58:54 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/29 10:06:31 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	private:
		Form* newPresidentialPardonForm(std::string target);
    	Form* newRobotomyRequestForm(std::string target);
    	Form* newShrubberyCreationForm(std::string target);

	public:
		Intern();
		Intern(Intern const &other);
		Intern &operator=(Intern const &other);
		virtual ~Intern();
		Form *makeForm(std::string const &type, std::string const &target);

		typedef Form* (Intern::*InternFPointer)(std::string);
};

#endif