/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 13:54:34 by jarumuga          #+#    #+#             */
/*   Updated: 2024/12/10 15:56:30 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

// init the static const
const int Fixed::_fractionalBits = 8;

// default constructor
// init a new object with default value
// called when no arguments are provided : Fixed a;
Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

// copy construtor
// init a new object as a copy
// called when a new object is created from another : Fixed b(a)
Fixed::Fixed(const Fixed &other) : _value(other._value)
{
	std::cout << "Copy constructor called" << std::endl;
}

// copy assignment operator
// assigns values to an existing object
// called when assigning to an already-created object : c = b;
Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_value = other._value;
	}
	return (*this);
}

// constructor from int
// intValue is shifted left by 8 bits
// example :
	// intValue = 5 and fractionalBits = 8
	// 5 << 8 = 5 * 2^8 = 5 * 256 = 1280
Fixed::Fixed(const int intValue)
{
	std::cout << "Int constructor called" << std::endl;
	_value = intValue << _fractionalBits;
}

// constructor from float
// converts the floating point value into a fixed-point number
// example :
	// floatValue = 3.14159 and fractionalBits = 8
	// 3.14159 * 256 = 803.84064
	// roundf -> 804
Fixed::Fixed(const float floatValue)
{
	std::cout << "Float constructor called" << std::endl;
	_value = static_cast<int>(roundf(floatValue * (1 << _fractionalBits)));
}

// destructor
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

// member function to get the raw value ; use return
int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

// member function to set the raw value ; assign with this
void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

// convert fixed-point to float
float Fixed::toFloat(void) const
{
	return (static_cast<float>(_value) / (1 << _fractionalBits));
}

// convert fixed-point to integer
int Fixed::toInt(void) const
{
	return (_value >> _fractionalBits);
}

// overload of insertion (<<) operator
// it permit to allow instances of the class to be output to std::cout
// reference to an std::ostream object
// operator<< : overload operator
// std::ostream &out : a reference to the output stream
// const Fixed &fixed a constant reference to the Fixed object being output
std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}
