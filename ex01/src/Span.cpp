#include "Span.hpp"
#include <vector>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <iterator>

/* ************************************************************************** */
/*                                OUTTER FONCTIONS                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                     DATA INIT                              */
/* ************************************************************************** */

char const *Span::NoEnoughtSpace::what() const throw() 
{
	return ("No enought space");
}

char const *Span::NoEnoughtElement::what() const throw() 
{
	return ("No enought element");
}

/* ************************************************************************** */
/*                           CONSTRUCTOR - DESTRUCTOR                         */
/* ************************************************************************** */

Span::Span(uint N) : _N(N)
{
	if (N == 0)
		throw Span::NoEnoughtElement();
	this->_array = std::vector<int>();
}

Span::Span(void) : _N(1)
{
	this->_array = std::vector<int>();
}

Span::Span(const Span &src)
{
	*this = src;
}

Span::~Span(void)
{

}

/* ************************************************************************** */
/*                              OVERLOAD FONCTIONS                            */
/* ************************************************************************** */

Span	&Span::operator=(const Span &right)
{
	if (this != &right)
	{
		this->_N = right._N;
		this->_array = right._array;
	}
	return (*this);
}

/* ************************************************************************** */
/*                                 ACCES FONCTIONS                            */
/* ************************************************************************** */

int Span::longestSpan(void) const 
{
	if (this->_array.size() < 2)
	{
		throw Span::NoEnoughtElement();
	}
	std::vector<int>::const_iterator max =
		std::max_element(this->_array.begin(), this->_array.end());
	std::vector<int>::const_iterator min =
		std::min_element(this->_array.begin(), this->_array.end());
	return (*max - *min);
}

int Span::shortestSpan(void) const
{
	if (this->_array.size() < 2)
		throw Span::NoEnoughtElement();
	std::vector<int> copy = this->_array;
	std::sort(copy.begin(), copy.end());
	std::vector<int>::const_iterator min =
		std::min_element(copy.begin(), copy.end());
	return (*(min + 1) - *min);
}

/* ************************************************************************** */
/*                                MEMBER FONCTIONS                            */
/* ************************************************************************** */

void Span::addNumber(int n)
{
	if (this->_array.size() < this->_N)
		this->_array.push_back(n);
	else
		throw NoEnoughtSpace();
}

void Span::addNumbers(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end)
{
	for (; begin < end; begin++)
	{
		if (this->_array.size() == this->_N)
			throw NoEnoughtSpace();
	this->_array.push_back(*begin);
	} 
}
