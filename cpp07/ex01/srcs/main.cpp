/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 14:28:36 by jarumuga          #+#    #+#             */
/*   Updated: 2025/01/27 09:24:50 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/iter.hpp"

int main()
{
	// testing with an array of integers
	int intArray[] = {11, 22, 33, 44, 55};
	size_t intArrayLength = 5;
	std::cout << "Integer array: ";
	iter(intArray, intArrayLength, printElement);
	std::cout << std::endl;

	// testing with an array of double
	double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
	size_t doubleArrayLength = 5;
	std::cout << "Double _array: ";
	iter(doubleArray, doubleArrayLength, printElement);
	std::cout << std::endl;

	// testing with an array of strings
	std::string strArray[] = {"aa", "bb", "cc", "dd", "ee"};
	size_t strArrayLength = 5;
	std::cout << "String _array: ";
	iter(strArray, strArrayLength, printElement);
	std::cout << std::endl;

	return (0);
}

