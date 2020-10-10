/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 19:04:39 by fulldemo          #+#    #+#             */
/*   Updated: 2020/09/23 13:32:29 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main()
{
    std::cout << "---mutant_stack----" << std::endl;

    MutantStack<int> ms;
    MutantStack<int> mstack(ms);

    mstack.push(5);
    mstack.push(17);

    std::cout << "top:" << mstack.top() << std::endl;

    mstack.pop();

    std::cout << "size:" << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);

    std::cout << "-------list--------" << std::endl;
    
    std::list<int> mslist;

    mslist.push_front(5);
    mslist.push_front(17);

    std::cout << "top:" << *mslist.begin() << std::endl;

    mslist.pop_front();

    std::cout << "size:" << mslist.size() << std::endl;

    mslist.push_front(3);
    mslist.push_front(5);
    mslist.push_front(737);
    mslist.push_front(0);

    std::list<int>::iterator lit = mslist.end();
    std::list<int>::iterator lite = mslist.begin();
    
    --lit;
    while (lit != lite)
    {
        std::cout << *lit << std::endl;
        --lit;
    }
    std::cout << *lit << std::endl;
    return (0);
}