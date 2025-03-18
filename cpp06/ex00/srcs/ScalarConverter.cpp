/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 13:06:08 by jarumuga          #+#    #+#             */
/*   Updated: 2025/01/15 14:30:38 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"
#include <iostream>
#include <cstdlib> // for strtod (string to double)
#include <cctype> // for isprint (is printable)
#include <climits> // for INT_MAX, INT_MIN
#include <cmath> // for isnan, isinf

// return true if it's one of the special float forms
static bool isFloatPseudoLiteral(const std::string &s)
{
	return (s == "+inff" || s == "-inff" || s == "nanf");
}

// return true if it's one of the special double forms
static bool isDoublePseudoLiteral(const std::string &s)
{
	return (s == "+inf" || s == "-inf" || s == "nan");
}

// return true if the string is a char literal
static bool isCharLiteral(const std::string &s)
{
	// check if length is 3 and surround by single quote
	return (s.size() == 3 && s[0] == '\'' && s[2] == '\'');
}

ScalarConverter::ScalarConverter() {}
ScalarConverter::~ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter &) {}
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &) { return *this; }

void ScalarConverter::convert(const std::string &literal)
{
	/* handle char literal: 'a' or 'Z' */
	if (isCharLiteral(literal))
	{
		char c = literal[1];
		std::cout << "char: '" << c << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(c) << std::endl;
		std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
		return ;
	}

	/* handle special pseudo literal */
	if (isFloatPseudoLiteral(literal))
	{
		if (literal == "+inff")
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: +inff" << std::endl;
			std::cout << "double: +inf" << std::endl;
		}
		else if (literal == "-inff")
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: -inff" << std::endl;
			std::cout << "double: -inf" << std::endl;
		}
		else // nanf
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: nanf" << std::endl;
			std::cout << "double: nan" << std::endl;
		}
		return ;
	}

	if (isDoublePseudoLiteral(literal))
	{
		if (literal == "+inf")
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: +inff" << std::endl;
			std::cout << "double: +inf" << std::endl;
		}
		else if (literal == "-inf")
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: -inff" << std::endl;
			std::cout << "double: -inf" << std::endl;
		}
		else // nan
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: nanf" << std::endl;
			std::cout << "double: nan" << std::endl;
		}
		return ;
	}

	/* try to parse it */
	char *endptr = NULL;
	// strtod : string to double ; use c_str to pass string in argument
	double d = std::strtod(literal.c_str(), &endptr);

	// check for any parse error
	bool conversionError = false;
	if (*endptr != '\0')
	{
		if (*endptr == 'f' && *(endptr + 1) == '\0')
		{
			// it's ok as float literal
		}
		else
		{
			// something else is left >> parse error
			conversionError = true;
		}
	}

	// if there is an error
	if (conversionError)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
		return ;
	}

	// convert to char
	// if outside of min and max or isnan or isinf throw an error
	if (d < static_cast<double>(CHAR_MIN) || d > static_cast<double>(CHAR_MAX) || isnan(d) || isinf(d))
		std::cout << "char: impossible" << std::endl;
	else
	{
		char c = static_cast<char>(d);
		// check if c is printable
		if (std::isprint(static_cast<unsigned char>(c)))
			std::cout << "char: '" << c << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}

	// convert to int
	if (d < static_cast<double>(INT_MIN) || d > static_cast<double>(INT_MAX) || isnan(d) || isinf(d))
		std::cout << "int: impossible" << std::endl;
	else
	{
		int i = static_cast<int>(d);
		std::cout << "int: " << i << std::endl;
	}

	// convert to float
	{
		float f = static_cast<float>(d);
		std::cout << "float: " << f;
		// check if it's an int value : by checking the is no rest 42.0f - 42 for example
		if (f - static_cast<int>(f) == 0 && !isinf(f) && !isnan(f))
			std::cout << ".0f" << std::endl;
		else
			std::cout << "f" << std::endl;
	}

	// convert to double
	{
		double dd = static_cast<double>(d);
		std::cout << "double: " << dd;
		if (dd - static_cast<int>(dd) == 0 && !isinf(dd) && !isnan(dd))
			std::cout << ".0" << std::endl;
		else
			std::cout << std::endl;
	}
}
