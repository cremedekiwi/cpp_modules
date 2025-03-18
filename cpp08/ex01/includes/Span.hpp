/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 14:20:57 by jarumuga          #+#    #+#             */
/*   Updated: 2025/01/28 17:31:11 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <exception>
#include <algorithm>

class Span
{
	private:
		unsigned int _maxSize;
		std::vector<int> _data;

	public:
		// constructors and destructor
		Span(unsigned int maxSize);
		Span(const Span &other);
		~Span();
		Span &operator=(const Span &other);

		// functions
		void addNumber(int number);
		int shortestSpan() const;
		int longestSpan() const;

		// exceptions
		class SpanFullException : public std::exception
		{
			public:
				const char *what() const throw();
		};
		class NoSpanException : public std::exception
		{
			public:
				const char *what() const throw();
		};
};

#endif
