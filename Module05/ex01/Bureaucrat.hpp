/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/27 16:23:01 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/29 10:54:21 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
class Bureaucrat;
# include "Form.hpp"

class Bureaucrat
{
	private:
		Bureaucrat();
		std::string _name;
		int _grade;

	public:
		Bureaucrat(std::string const &name, int grade);
		Bureaucrat(Bureaucrat const &other);
		Bureaucrat &operator=(Bureaucrat const &other);
		virtual ~Bureaucrat();
		class GradeTooHighException: public std::exception {
			virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception {
			virtual const char* what() const throw();
		};
		std::string getName() const;
		int	getGrade() const;
		void incrementGrade();
		void decrementGrade();
		void signForm(Form &frm) const;
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &other);

#endif