/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 14:37:55 by jarumuga          #+#    #+#             */
/*   Updated: 2025/01/29 12:47:42 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"
#include <stdexcept>
#include <limits>
#include <iostream>

Span::Span(unsigned int maxSize) : _maxSize(maxSize) {}
Span::Span(const Span &other) : _maxSize(other._maxSize), _data(other._data) {}
Span::~Span() {}

Span &Span::operator=(const Span &other)
{
	// to prevent self assignment
	if (this != &other)
	{
		_maxSize = other._maxSize;
		_data = other._data;
	}
	return (*this);
}

void Span::addNumber(int number)
{
	// if _data is already full it throw an exception
	if (_data.size() >= _maxSize)
		throw Span::SpanFullException();
	_data.push_back(number);
}

// find the smallest difference between any two numbers
int Span::shortestSpan() const
{
	// if there are less tham 2 nbr, throws an exception
	if (_data.size() < 2)
		throw Span::NoSpanException();

	// make a copy of data to sort the nbr
	std::vector<int> sorted = _data;
	std::sort(sorted.begin(), sorted.end());

	// minSpan = int max ; it ensures any real diff is smaller
	int minSpan = std::numeric_limits<int>::max();
	// compare each element to the previous one
	// calculate the span
	// if the span < minSpan ; we assign the value
	for (size_t i = 1; i < sorted.size(); ++i)
	{
		int span = sorted[i] - sorted[i - 1];
		if (span < minSpan)
			minSpan = span;
	}
	return (minSpan);
}

int Span::longestSpan() const
{
	if (_data.size() < 2)
		throw Span::NoSpanException();

	// find the highest number and the lowest number
	int maxElement = *std::max_element(_data.begin(), _data.end());
	int minElement = *std::min_element(_data.begin(), _data.end());

	// return the difference
	return (maxElement - minElement);
}

const char *Span::SpanFullException::what() const throw()
{
	return "Span is full, cannot add more numbers!";
}

const char *Span::NoSpanException::what() const throw()
{
	return "Not enough numbers to find a span!";
}
