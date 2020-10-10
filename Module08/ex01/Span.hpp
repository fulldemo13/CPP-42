/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 19:27:28 by fulldemo          #+#    #+#             */
/*   Updated: 2020/09/23 13:37:17 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Span_HPP
# define Span_HPP

# include <set>
# include <iostream>
# include <algorithm>
# include <cmath>

class Span
{
	private:
		std::multiset<int> num;
		unsigned int size;
		Span();

	public:
		Span(unsigned int n);
		Span(Span const &other);
		Span &operator=(Span const &other);
		virtual ~Span();
		class SpaceException: public std::exception
		{
			virtual const char *what() const throw ();
		};
		class NumberException: public std::exception
		{
			virtual const char *what() const throw ();
		};
		template<typename T>
		void addNumber(T begin, T end)
		{
			if (this->num.size() + std::distance(begin, end) > this->size)
				throw (Span::SpaceException());
			this->num.insert(begin, end);
		};
		void addNumber(int i);
		int shortestSpan(void);
		int longestSpan(void);
};

#endif