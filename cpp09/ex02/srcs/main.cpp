/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 13:52:58 by jarumuga          #+#    #+#             */
/*   Updated: 2025/02/04 14:54:37 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PmergeMe.hpp"

int main(int ac, char **av)
{
	// need at least one argument
	if (ac < 2)
	{
		std::cerr << "Error: No input provided" << std::endl;
		return (1);
	}

	// declares two containers
	std::vector<int> vec;
	std::deque<int> deq;

	// parses command-line arguments and stores them in two different containers
	for (int i = 1; i < ac; ++i)
	{
		// creates a string stream from the argument
		std::istringstream iss(av[i]);
		int num;
		// iss >> num : extracts the int from the stream
		// if it's not a number or <=0 print an error
		if (!(iss >> num) || num <= 0)
		{
			std::cerr << "Error: Invalid input. Only positive integers are allowed." << std::endl;
			return (1);
		}
		// add the int to the containers
		vec.push_back(num);
		deq.push_back(num);
	}
	// sort both containers and mesures
	PmergeMe sort;
	sort.sortAndMeasure(vec, deq);

	return (0);
}
