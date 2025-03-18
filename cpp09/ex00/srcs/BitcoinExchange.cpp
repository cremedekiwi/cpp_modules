/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 14:35:33 by jarumuga          #+#    #+#             */
/*   Updated: 2025/01/31 12:43:46 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const std::string &dbFiles)
{
	loadData(dbFiles);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) : btcRates(other.btcRates) {}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
	if (this != &other)
		btcRates = other.btcRates;
	return (*this);
}

BitcoinExchange::~BitcoinExchange() {}

// reads a file containing Bitcoin exchange rates and stores them in a map names btcRates
// &filename holds the name of the file to be opened
void BitcoinExchange::loadData(const std::string &filename)
{
	// open the file ; c_str for c++98
	std::ifstream file(filename.c_str());
	// if the file fails to open throw an error
	if (!file)
	{
		std::cerr << "Error: could not open file." << std::endl;
		exit(1);
	}
	std::string line, date;
	double rate;
	// reading the file line by line
	while (std::getline(file, line))
	{
		// treat line as an input stream (like reading from cin)
		// a stream is an abstraction for input and output
		std::istringstream ss(line);
		// extract the date before the comma ; extract the rate after the comma
		if (std::getline(ss, date, ',') && ss >> rate)
			btcRates[date] = rate; // stores the date as the key, and the rate as the value
	}
}

// retrieves the Bitcoin exchange rate for a given date
// if the exact date is not available, it returns the closest previous exchane rate
double BitcoinExchange::getExchangeRate(const std::string &date) const
{
	// lower_bound : find the first element whose key is greater than or equal to date
	std::map<std::string, double>::const_iterator it = btcRates.lower_bound(date);
	// if date not found or a future date, check for prev date
	if (it == btcRates.end() || it->first != date)
	{
		// handle missing prev date
		if (it == btcRates.begin())
			return (0.0);
		// move the iterator back to the prev date
		--it;
	}
	// return the exchange date
	return (it->second);
}

// leap year is a year with 366 days instead of 365
// when is divisible by 4 and not divisible by 100 or if divisible by 400
bool isLeapYear(int year)
{
	return ((year % 4 == 0 && year % 100 != 0 ) || (year % 400 == 0));
}

bool isValidDate(const std::string &date)
{
	// check if size is 10 and i have '-' around month otherwise return false
	if (date.size() != 10 || date[4] != '-' || date[7] != '-')
		return (false);

	// extract year, month, date
	int year = atoi(date.substr(0, 4).c_str());
	int month = atoi(date.substr(5, 2).c_str());
	int day = atoi(date.substr(8, 2).c_str());

	if (year < 2009 || year > 2024 || month < 1 || month > 12 || day < 1)
		return (false);

	int daysInMonth[] = {31, (isLeapYear(year) ? 29 : 28), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	// month - 1 because array start at 0
	// dat is valid if it's 1 to daysInMonth
	return (day <= daysInMonth[month - 1]);
}

// ensure the value is between 0 to 1000
// valueStr : input string to be checked
// value : valid value
bool isValidValue(const std::string &valueStr, double &value)
{
	// convert the string into a input string stream to allow extraction (>>)
	std::istringstream ss(valueStr);
	// extract the converted number in value, then check if neg or +1000
	if (!(ss >> value) || value < 0 || value > 1000)
		return (false);
	return (true);
}
