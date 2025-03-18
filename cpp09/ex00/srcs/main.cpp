/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 14:49:05 by jarumuga          #+#    #+#             */
/*   Updated: 2025/01/31 12:53:43 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Error: you need two arguments : ./btc input.txt" << std::endl;
		return (1);
	}

	BitcoinExchange btc("data.csv");
	std::ifstream inputFile(av[1]);
	if (!inputFile)
	{
		std::cerr << "Error: could not open data file." << std::endl;
		return (1);
	}

	std::string line;
	// ignore the first line
	std::getline(inputFile, line);
	// read each line
	while (std::getline(inputFile, line))
	{
		std::istringstream ss(line);
		std::string date, valueStr;
		// the line is split into date and value using '|' delimiter
		// if parsing fail, throw an error
		if (!(std::getline(ss, date, '|') && std::getline(ss, valueStr)))
		{
			std::cerr << "Error: bad input => " << line << std::endl;
			continue;
		}

		// trim spaces from both date and valueStr
		date = date.substr(0, date.find_last_not_of(" ") + 1);
		valueStr = valueStr.substr(valueStr.find_first_not_of(" "));

		double value;
		// valid date
		if (!isValidDate(date))
		{
			std::cerr << "Error: bad input => " << date << std::endl;
			continue;
		}
		// valid value
		if (!isValidValue(valueStr, value))
		{
			// check if the value is a positive int
			std::cerr << (value < 0 ? "Error: not a positive number." : "Error: too large a number.") << std::endl;
			continue;
		}

		// retrieve exchange rate and calculate (value * rate)
		double rate = btc.getExchangeRate(date);
		std::cout << date << " => " << value << " = " << (value * rate) << std::endl;
	}
	return (0);
}
