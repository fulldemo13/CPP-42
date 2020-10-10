/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 19:36:20 by fulldemo          #+#    #+#             */
/*   Updated: 2020/09/11 16:19:39 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identifier.hpp"

int main()
{
	Base *b;
	srand(time(NULL));
	
	b = generate();
	std::cout << "Identify from pointer:" << std::endl;
	identify_from_pointer(b);
	std::cout << "Identify from reference" << std::endl;
	identify_from_reference(*b);
	delete b;
	return (0);
}