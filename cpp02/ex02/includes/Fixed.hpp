/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 13:16:03 by jarumuga          #+#    #+#             */
/*   Updated: 2024/12/10 15:58:18 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int _value; // fixed-point number value
		static const int _fractionalBits; // number of fractional bits

	public:
		// constructors and destructor
		Fixed(); // default
		Fixed(const Fixed &other); // copy
		Fixed &operator=(const Fixed &other); // copy assignment
		Fixed(const int intValue); // constructor from int
		Fixed(const float floatValue); // constructor from float
		~Fixed(); // destructor

		// comp operators
		bool operator>(const Fixed &other) const;
		bool operator<(const Fixed &other) const;
		bool operator>=(const Fixed &other) const;
		bool operator<=(const Fixed &other) const;
		bool operator==(const Fixed &other) const;
		bool operator!=(const Fixed &other) const;

		// arithmetic operators
		Fixed operator+(const Fixed &other) const;
		Fixed operator-(const Fixed &other) const;
		Fixed operator*(const Fixed &other) const;
		Fixed operator/(const Fixed &other) const;

		// increment/decrement operators
		Fixed &operator++();
		Fixed operator++(int);
		Fixed &operator--();
		Fixed operator--(int);

		// min and max functions
		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);

		// member functions
		int getRawBits(void) const; // get the raw value
		void setRawBits(int const raw); // set the raw value
		float toFloat(void) const;
		int toInt(void) const;

		// public getter for << operator
		float getFloatValue(void) const;
};

// overload for insertion operator
std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
