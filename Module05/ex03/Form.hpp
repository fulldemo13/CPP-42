/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/27 18:04:03 by fulldemo          #+#    #+#             */
/*   Updated: 2020/07/29 11:28:58 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include <fstream>
class Form;
# include "Bureaucrat.hpp"

class Form
{
	private:
		Form();
		const std::string _name;
		bool _sign;
		const int _signGrade;
		const int _executeGrade;
		
	public:
		Form(std::string const &name, int signGrade, int executeGrade);
		Form(Form const &other);
		Form &operator=(Form const &other);
		virtual ~Form();
		class GradeTooHighException: public std::exception {
			virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception {
			virtual const char* what() const throw();
		};
		class FormIsntSigned: public std::exception {
			virtual const char* what() const throw();
		};
		std::string getName() const;
		bool getSign() const;
		int getSignGrade()const;
		int getExecuteGrade() const;
		void beSigned(Bureaucrat const &brt);
		virtual void execute(Bureaucrat const &executor) const = 0;
};

std::ostream &operator<<(std::ostream &out, Form const &other);

#endif