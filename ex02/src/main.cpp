/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatis <tmatis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 15:27:36 by tmatis            #+#    #+#             */
/*   Updated: 2021/08/28 15:39:48 by tmatis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main(void)
{
	{
		MutantStack<int> stack;

		stack.push(5);
		stack.push(17);
		stack.push(42);
		stack.push(42);
		stack.push(42);
		stack.push(42);
		stack.push(42);
		stack.push(42);

		for (MutantStack<int>::iterator it = stack.begin(); it != stack.end(); ++it)
		{
			std::cout << *it << std::endl;
		}
	}
	{
		std::list<int> stack;

		stack.push_back(5);
		stack.push_back(17);
		stack.push_back(42);
		stack.push_back(42);
		stack.push_back(42);
		stack.push_back(42);
		stack.push_back(42);
		stack.push_back(42);

		for (std::list<int>::iterator it = stack.begin(); it != stack.end(); ++it)
		{
			std::cout << *it << std::endl;
		}
	}
}
