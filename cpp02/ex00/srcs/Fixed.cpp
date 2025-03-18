/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 13:54:34 by jarumuga          #+#    #+#             */
/*   Updated: 2024/12/10 14:07:55 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

// init the static const : 2^8 = 256
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
	if (this != &other)
		this->_value = other._value;
	return (*this);
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
	return (this->_value);
}

// member function to set the raw value ; assign with this
void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

