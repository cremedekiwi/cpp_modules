/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 14:28:36 by jarumuga          #+#    #+#             */
/*   Updated: 2025/01/27 10:39:25 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Array.hpp"
#include <iostream>
#include <string>

int main(int, char**)
{
	try
	{
		// default
		Array<int> emptyArray;
		std::cout << std::endl << "Test 0 : default with empty array" << std::endl;
		std::cout << "Array size : " << emptyArray.size() << std::endl;
		std::cout << "--------------------" << std::endl;

		// with size
		Array<int> intArray(5);
		std::cout << "Test 1 : default with size" << std::endl;
		std::cout << "Array size : " << intArray.size() << std::endl;
		for (unsigned int i = 0; i < intArray.size(); ++i)
		{
			intArray[i] = i * 10;
			std::cout << "index[" << i << "] = " << intArray[i] << std::endl;
		}
		// int* a = new int();
		// std::cout << "Value of *a : " << *a << std::endl;
		// delete a;
		std::cout << "--------------------" << std::endl;

		// copy
		Array<int> copiedArray(intArray);
		copiedArray[0] = 42;

		std::cout << "Test 2 : copy" << std::endl;
		std::cout << "Original :" << std::endl;
		for (unsigned int i = 0; i < intArray.size(); ++i)
			std::cout << "index[" << i << "] = " << intArray[i] << std::endl;

		std::cout << std::endl << "Copied :" << std::endl;
		for (unsigned int i = 0; i < copiedArray.size(); ++i)
			std::cout << "index[" << i << "] = " << copiedArray[i] << std::endl;
		std::cout << "--------------------" << std::endl;

		// assigned
		Array<int> assignedArray;
		assignedArray = intArray;

		std::cout << "Test 3 : assigned" << std::endl;
		std::cout << "Original :" << std::endl;
		for (unsigned int i = 0; i < intArray.size(); ++i)
			std::cout << "index[" << i << "] = " << intArray[i] << std::endl;

		assignedArray[4] = 42;
		std::cout << std::endl << "Assigned :" << std::endl;
		for (unsigned int i = 0; i < assignedArray.size(); ++i)
			std::cout << "index[" << i << "] = " << assignedArray[i] << std::endl;
		std::cout << "--------------------" << std::endl;

		// out of bounds
		std::cout << "Test 4 : out of bounds" << std::endl;
		std::cout << "Size of array " << intArray.size() << ", trying to access index 10" << std::endl;
		std::cout << intArray[10] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception : " << e.what() << std::endl << std::endl;
	}

}

