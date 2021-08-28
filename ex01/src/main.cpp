/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatis <tmatis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 14:34:11 by tmatis            #+#    #+#             */
/*   Updated: 2021/08/28 14:59:16 by tmatis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cstdlib>

int main(void)
{
	{
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "shortest: " << sp.shortestSpan() << std::endl;
		std::cout << "longest: " << sp.longestSpan() << std::endl;
	}
	{
		Span sp = Span(6);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		Span sp2;
		sp2 = sp;
		sp2.addNumber(999);
		std::cout << "shortest: " << sp2.shortestSpan() << std::endl;
		std::cout << "longest: " << sp2.longestSpan() << std::endl;
	}
	{
		Span sp(5);

		try
		{
			sp.longestSpan();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		try
		{
			sp.addNumber(11);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::vector<int> v;

		for (int i = 0; i < 1000000; i+=2)
			v.push_back(i);
		Span sp(1000000);
		sp.addNumbers(v.begin(), v.end());
		std::cout << "shortest: " << sp.shortestSpan() << std::endl;
		std::cout << "longest: " << sp.longestSpan() << std::endl;
	}
	{
		std::vector<int> v;

		for (int i = 0; i < 1000; i++)
			v.push_back(i);
		Span sp(500);
		try
		{
			sp.addNumbers(v.begin(), v.end());
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}
