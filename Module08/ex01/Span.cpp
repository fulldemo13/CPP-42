/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 19:30:46 by fulldemo          #+#    #+#             */
/*   Updated: 2020/09/23 13:37:52 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n) : size(n)
{
}

Span::Span(Span const &other)
{
	this->size = other.size;
	this->num = other.num;
}

Span &Span::operator=(Span const &other)
{
	this->num.clear();
	this->size = other.size;
	this->num = other.num;
	return (*this);
}

Span::~Span()
{
	this->num.clear();
}

const char* Span::SpaceException::what() const throw ()
{
	return ("SpaceException: Object is full.");
}

const char* Span::NumberException::what() const throw ()
{
	return ("NumberException: can't calculate");
}

void Span::addNumber(int i)
{
	if (this->size == this->num.size())
		throw (Span::SpaceException());
	this->num.insert(i);
}

int Span::shortestSpan(void)
{
	int res;
	int dif;
	if (this->num.size() <= 1)
		throw (Span::NumberException());
	std::multiset<int>::iterator first = this->num.begin();
	std::multiset<int>::iterator next = this->num.begin();
	next++;
	res = std::abs(*next - *first);
	while (next != this->num.end())
	{
		dif = std::abs(*next - *first);
		if (dif < res)
			res = dif;
		first++;
		next++;
	}	
	return (res);
}

int Span::longestSpan(void)
{
	if (this->num.size() <= 1)
		throw (Span::NumberException());
	int max = *std::max_element(this->num.begin(), this->num.end());
	int min = *std::min_element(this->num.begin(), this->num.end());
	return (std::abs(max - min));
}