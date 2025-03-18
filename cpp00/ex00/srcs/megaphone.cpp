/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 13:25:10 by jarumuga          #+#    #+#             */
/*   Updated: 2024/12/02 16:14:51 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>	// cout and endl
#include <string>	// string, +=, .length()
#include <cctype>	// isalpha, toupper

/**
* @brief print sentence
* @note & : the original string is passed by reference
* @note std : standard lib ; namespace to avoid name conflicts
* @note cout : char output (console)
* @note << : send data to the cout
* @note endl : add a newline and flushes the cout
*/
void printSentence(const std::string& str)
{
	std::cout << str << std::endl;
}

/**
* @brief to upper case
* @note result is a copy of str
* @note isalpha -> check if the char is A-Z or a-z
* @note toupper -> to uppercase
*/
std::string toUpperCase(const std::string& str)
{
	std::string result = str;
	for (std::size_t i = 0; i < result.length(); ++i)
	{
		if (std::isalpha(str[i]))
			result[i] = std::toupper(result[i]);
	}
	return (result);
}

/**
* @brief main function
* @note if no argv print defaut sentence
* @note if one or more, print it to uppercase with a space
*/
int main(int ac, char** av)
{
	if (ac == 1)
		printSentence("* LOUD AND UNBEARABLE FEEDBACK NOISE *");
	else
	{
		std::string str;
		for (int i = 1; i < ac; ++i)
		{
			if (i > 1)
				str += " ";
			str += av[i];
		}
		printSentence(toUpperCase(str));
	}
	return (0);
}
