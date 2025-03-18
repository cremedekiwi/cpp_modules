/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 13:54:34 by jarumuga          #+#    #+#             */
/*   Updated: 2024/12/10 17:27:04 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

// init the static const
const int Fixed::_fractionalBits = 8;

// constructors and destructor
Fixed::Fixed() : _value(0) {}
Fixed::Fixed(const Fixed &other) : _value(other._value) {}
Fixed &Fixed::operator=(const Fixed &other)
{
	if (this != &other) {
		this->_value = other._value;
	}
	return (*this);
}
Fixed::Fixed(const int intValue) : _value(intValue << _fractionalBits) {}
Fixed::Fixed(const float floatValue) : _value(static_cast<int>(roundf(floatValue * (1 << _fractionalBits)))) {}
Fixed::~Fixed() {}

// comp operators
bool Fixed::operator>(const Fixed &other) const { return _value > other._value; }
bool Fixed::operator<(const Fixed &other) const { return _value < other._value; }
bool Fixed::operator>=(const Fixed &other) const { return _value >= other._value; }
bool Fixed::operator<=(const Fixed &other) const { return _value <= other._value; }
bool Fixed::operator==(const Fixed &other) const { return _value == other._value; }
bool Fixed::operator!=(const Fixed &other) const { return _value != other._value; }

// arithmetic operators

// the operator+ is invoked on a, with b as the &other argument
// a new Fixed object is created (result)
// the value of a and b are added and stored in result
// the result object is returned
Fixed Fixed::operator+(const Fixed &other) const
{
	Fixed result;
	result._value = _value + other._value;
	return (result);
}

// the operator- is invoked on a, with b as the &other argument
// a new Fixed object is created (result)
// the value of a and b are substracted and stored in result
// the result object is returned
Fixed Fixed::operator-(const Fixed &other) const
{
	Fixed result;
	result._value = _value - other._value;
	return (result);
}

// the operator* is invoked on a, with b as the &other argument
// the value of both objects are multiplied
// the product is adjusted by shifting right to account for the scaling
// the result object is returned
Fixed Fixed::operator*(const Fixed &other) const
{
	Fixed result;
	result._value = (_value * other._value) >> _fractionalBits;
	return (result);
}

// the operator/ is invoked on a, with b as the &other argument
// the value of both objects are divided
// the numerator is scaled by left-shifting to ensure sufficient precision
// the result object is returned
Fixed Fixed::operator/(const Fixed &other) const
{
	Fixed result;
	result._value = (_value << _fractionalBits) / other._value;
	return (result);
}

// increment and decrement operators
Fixed &Fixed::operator++()
{
	_value++;
	return (*this);
}

// a temp copy of the object is created to preserve the original value
// value is incremented
// returns the temporary copy which represents the object's state before the ++
Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	++_value;
	return (temp);
}

Fixed &Fixed::operator--()
{
	_value--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	--_value;
	return (temp);
}

// min and max functions
// if you want to modify a or b
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return ((a < b) ? a : b);
}

// you cannot modify a and b
const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return ((a < b) ? a : b);
}

// if you want to modify a or b
Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return ((a > b) ? a : b);
}

// you cannot modify a and b
const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return ((a > b) ? a : b);
}

// member functions
int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

float Fixed::toFloat(void) const
{
	return (static_cast<float>(_value) / (1 << _fractionalBits));
}

int Fixed::toInt(void) const
{
	return (_value >> _fractionalBits);
}

// getter for << operator
float Fixed::getFloatValue(void) const
{
	return (toFloat());
}

// overload for insertion operator
// getFloat
std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.getFloatValue();
	return (out);
}
