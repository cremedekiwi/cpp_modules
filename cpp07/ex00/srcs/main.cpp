/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 14:28:36 by jarumuga          #+#    #+#             */
/*   Updated: 2025/01/27 09:12:20 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/whatever.hpp"
#include <string>
#include <iostream>

int main(void)
{
	int a = 42;
	int b = 21;
	std::cout << "original : a = " << a << ", b = " << b << std::endl;
	::swap(a, b);
	std::cout << "____swap : a = " << a << ", b = " << b << std::endl;
	std::cout << "min : " << ::min(a, b) << std::endl;
	std::cout << "max : " << ::max(a, b) << std::endl;

	std::cout << std::endl << "--------------------" << std::endl;

	double c = 42.42;
	double d = 21.21;
	std::cout << std::endl << "original : c = " << c << ", d = " << d << std::endl;
	::swap(c, d);
	std::cout << "____swap : c = " << c << ", d = " << d << std::endl;
	std::cout << "min : " << ::min(c, d) << std::endl;
	std::cout << "max : " << ::max(c, d) << std::endl;

	std::cout << std::endl << "--------------------" << std::endl;

	std::string e = "kiwi";
	std::string f = "banane";
	std::cout << std::endl << "original : e = " << e << ", f = " << f << std::endl;
	::swap(e, f);
	std::cout << "____swap : e = " << e << ", f = " << f << std::endl;
	std::cout << "min : " << ::min(e, f) << std::endl;
	std::cout << "max : " << ::max(e, f) << std::endl;

	return (0);
}
