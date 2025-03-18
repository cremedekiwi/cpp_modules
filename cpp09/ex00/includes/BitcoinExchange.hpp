/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 13:19:20 by jarumuga          #+#    #+#             */
/*   Updated: 2025/01/31 11:28:04 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <string>
#include <cstdlib>
#include <limits>

class BitcoinExchange
{
	private:
		// key : string ; value : double
		std::map<std::string, double> btcRates;

	public:
		BitcoinExchange();
		BitcoinExchange(const std::string &dbFiles);
		BitcoinExchange(const BitcoinExchange &other);
		BitcoinExchange &operator=(const BitcoinExchange &other);
		~BitcoinExchange();

		void loadData(const std::string &filename);
		double getExchangeRate(const std::string &date) const;
};

bool isValidDate(const std::string &date);
bool isValidValue(const std::string &valueStr, double &value);

#endif
