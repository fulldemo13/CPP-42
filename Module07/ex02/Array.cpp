/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 16:18:14 by fulldemo          #+#    #+#             */
/*   Updated: 2020/09/16 11:18:33 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array()
{
	this->sz = 0;
	this->arr = nullptr;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
	this->sz = n;
	this->arr = new T[n];
}

template<typename T>
Array<T>::Array(Array const &other)
{
	if (other.sz > 0)
	{	
		this->sz = other.sz;
		this->arr = new T[this->sz];
		for (int i = 0; i < other.sz; i++)
			this->arr[i] = other.arr[i];
	}
	else
	{
		this->sz = 0;
		this->arr = nullptr;
	}	
}

template<typename T>
Array<T>::~Array()
{
	if (this->sz > 0)
		delete[] this->arr;
}

template<typename T>
int Array<T>::size() const
{
	return (this->sz);
}

template<typename T>
const char* Array<T>::BoundsException::what() const throw()
{
	return ("Out of bounds exception");
}

template<typename T>
T &Array<T>::operator[](const int i)
{
	if (i < 0 || i >= this->sz)
		throw (Array::BoundsException());
	return (this->arr[i]);
}

template<typename T>
Array<T> &Array<T>::operator=(Array const  &other)
{
	if (this->sz > 0)
		delete[]this->arr;
	this->arr = nullptr;
	this->sz = other.sz;
	if (other.sz > 0)
	{
		this->arr = new T[other.sz];
		for (int i = 0; i < other.sz; i++)
			this->arr[i] = other.arr[i];
	}
	return (*this);
}

int main()
{
	Array<int> iarr(3);
	Array<int> iar;
	for (int i = 0; i < iarr.size(); i++)
	{
		iarr[i] = i;
		std::cout << iarr[i] << std::endl;
	}
	iar = iarr;
	for (int i = 0; i < iar.size(); i++)
	{
		iar[i] += 1;
		std::cout << iar[i] << std::endl;
	}
	for (int i = 0; i < iarr.size(); i++)
		std::cout << iarr[i] << std::endl;
	try
	{
		iarr[-1] = 42;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::string str[3] = {"Hola", "que", "tal"};
	Array<std::string> strarr(3);
	for (int i = 0; i < strarr.size(); i++)
	{
		strarr[i] = str[i];
		std::cout << strarr[i] << std::endl;
	}
	Array<std::string> strar(strarr);
	for (int i = 0; i < strar.size(); i++)
		std::cout << strar[i] << std::endl;
	try
	{
		strarr[42] = "42";
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}