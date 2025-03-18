/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 11:24:05 by jarumuga          #+#    #+#             */
/*   Updated: 2025/01/29 12:49:00 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/easyfind.hpp"
#include <vector>

int main()
{
	try
	{
		// create a vector
		// push 10 nbr
		std::vector<int> vec;
		for (int i = 0; i < 10; ++i)
			vec.push_back(i);

		// print the nbr
		std::cout << "Vector: ";
		for (size_t i = 0; i < vec.size(); ++i)
			std::cout << vec[i] << " ";
		std::cout << std::endl;

		// create a target with a value 5
		// create an iterator it and use the function easyfind to find the nbr in the vector
		// if find print the value, otherwise throw an error
		int target = 5;
		std::cout << "Looking for " << target << " in vector..." << std::endl;
		std::vector<int>::iterator it = easyfind(vec, target);
		std::cout << "Found: " << *it << " at index " << std::distance(vec.begin(), it) << std::endl;

		// value doesn't exist
		target = 20;
		std::cout << "Looking for " << target << " in vector..." << std::endl;
		it = easyfind(vec, target);
		std::cout << "Found: " << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
}
