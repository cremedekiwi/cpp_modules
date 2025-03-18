/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 11:24:05 by jarumuga          #+#    #+#             */
/*   Updated: 2025/01/29 12:54:07 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	try
	{
		Span span(5);

		span.addNumber(1);
		span.addNumber(400);
		span.addNumber(60);
		span.addNumber(200);
		span.addNumber(1000);

		std::cout << "----------" << std::endl;
		std::cout << "Test 0: normal" << std::endl;
		std::cout << "Shortest distance: " << span.shortestSpan() << std::endl;
		std::cout << "Longest distance: " << span.longestSpan() << std::endl;
		std::cout << "----------" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	try
	{
		Span emptySpan(2);

		std::cout << emptySpan.shortestSpan() << std::endl;
		std::cout << emptySpan.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Test 1: empty" << std::endl;
		std::cerr << "Exception: " << e.what() << std::endl;
		std::cout << "----------" << std::endl;
	}

	try
	{
		Span oneSpan(2);
		oneSpan.addNumber(42);

		std::cout << oneSpan.shortestSpan() << std::endl;
		std::cout << oneSpan.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Test 2: one number" << std::endl;
		std::cerr << "Exception: " << e.what() << std::endl;
		std::cout << "----------" << std::endl;
	}

	try
	{
		Span fullSpan(2);

		fullSpan.addNumber(1);
		fullSpan.addNumber(400);
		fullSpan.addNumber(60);
		fullSpan.addNumber(200);
		fullSpan.addNumber(1000);
		fullSpan.addNumber(42);

		std::cout << "Shortest Span: " << fullSpan.shortestSpan() << std::endl;
		std::cout << "Longest Span: " << fullSpan.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Test 3: full" << std::endl;
		std::cerr << "Exception: " << e.what() << std::endl;
		std::cout << "----------" << std::endl;
	}

	try
	{
		Span largeSpan(10000);
		std::srand(std::time(0));
		for (int i = 0; i < 10000; ++i)
			largeSpan.addNumber(std::rand() % 100000);

		std::cout << "Test 4: large number" << std::endl;
		std::cout << "Large shortest Span: " << largeSpan.shortestSpan() << std::endl;
		std::cout << "Large longest Span: " << largeSpan.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
}
