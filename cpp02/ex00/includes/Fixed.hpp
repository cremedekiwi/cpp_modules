/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 13:16:03 by jarumuga          #+#    #+#             */
/*   Updated: 2024/12/10 14:04:24 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

// fixed
// is a way of representating real numbers in a binary system using an int
// example :
	// fractional bits = 8
	// scaling factor = 2^8 = 256
	// converting real numbers to fixed-point
// converting real numbers to fixed-point
	// multiply the nbr 2^8 (scaling factor) 5.25 * 256 = 1344
	// store 1344 as an int
// converting fixed-point to real numbers
	// divide the int by 2^8 1344 / 256 = 5.25
class Fixed
{
	private:
		int _value; // fixed-point number value
		static const int _fractionalBits; // number of fractional bits

	public:
		// constructors and destructor
		Fixed(); // default
		Fixed(const Fixed &other); //copy
		Fixed &operator=(const Fixed &other); // copy assignment
		~Fixed(); // destructor

		// member functions
		int getRawBits(void) const; // get the raw value
		void setRawBits(int const raw); // set the raw value
};

#endif
