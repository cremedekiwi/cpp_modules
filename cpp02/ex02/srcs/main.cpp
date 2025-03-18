/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 14:04:11 by jarumuga          #+#    #+#             */
/*   Updated: 2024/12/10 17:30:38 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

int main( void )
{
	Fixed a; // default constructor, init _value to 0.
	// Fixed(5.05f):
		// calls the float constructor: _value = round(5.05 * 2^8) = round(1292.8) = 1293
	// Fixed(2):
		// calls the int constructor: _value = 2 << 8 = 512
	// Fixed(5.05f) * Fixed(2):
		// result: (_value of 1293 * _value of 512) >> 8 = (1293 * 512) / 256 = 2581
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl; // prints a.toFloat(): (0 / 256) = 0
	std::cout << ++a << std::endl; // pre-increment: _value = 1; a.toFloat(): (1 / 256) = 0.00390625
	std::cout << a << std::endl; // prints a.toFloat(): (1 / 256) = 0.00390625
	std::cout << a++ << std::endl; // post-increment: prints (1 / 256) = 0.00390625, then _value = 2
	std::cout << a << std::endl; // prints a.toFloat(): (2 / 256) = 0.0078125
	std::cout << b << std::endl; // prints b.toFloat(): (2581 / 256) ≈ 10.1015625
	std::cout << Fixed::max(a, b) << std::endl; // max(a, b): b.toFloat() = 10.1015625, since 2581 > 2

	return (0);
}
