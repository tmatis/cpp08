/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatis <tmatis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 11:21:20 by tmatis            #+#    #+#             */
/*   Updated: 2021/08/28 11:31:41 by tmatis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <iostream>

int main(void)
{
	std::vector<int> v;
	for (int i = 0; i < 6; i++)
		v.push_back(i);

	try
	{
		std::vector<int>::iterator it = easyfind(v, 3);
		std::cout << "found: " << *it << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::vector<int>::iterator it = easyfind(v, 6);
		std::cout << "found: " << *it << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "except: "<< e.what() << std::endl;
	}
}
