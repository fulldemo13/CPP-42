/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 11:46:39 by fulldemo          #+#    #+#             */
/*   Updated: 2020/09/23 13:48:18 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <deque>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack();
		MutantStack(MutantStack<T> const &other);
		MutantStack<T> &operator=(MutantStack<T> const &other);
		virtual ~MutantStack();

		typedef typename std::stack<T>::container_type::iterator iterator;	
		iterator begin(void);
		iterator end(void);
};

# include "MutantStack.ipp"

#endif