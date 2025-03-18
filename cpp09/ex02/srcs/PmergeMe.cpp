/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 13:38:26 by jarumuga          #+#    #+#             */
/*   Updated: 2025/02/04 14:49:20 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &other)
{
	*this = other;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other)
{
	if (this != &other) {}
	return (*this);
}

PmergeMe::~PmergeMe() {}

// merge insertion sort (ford johnson algorithm)
void PmergeMe::mergeInsertSortVector(std::vector<int> &vec)
{
	// stop recursion for small inputs
	if (vec.size() < 2)
		return;

	// divide into two
	size_t mid = vec.size() / 2;
	std::vector<int> left(vec.begin(), vec.begin() + mid);
	std::vector<int> right(vec.begin() + mid, vec.end());

	// recursively sort left and right halves
	mergeInsertSortVector(left);
	mergeInsertSortVector(right);

	// merge the two sorted halves
	size_t i = 0, j = 0, k = 0;
	while (i < left.size() && j < right.size())
	{
		if (left[i] < right[j])
			vec[k++] = left[i++];
		else
			vec[k++] = right[j++];
	}
	while (i < left.size())
		vec[k++] = left[i++];
	while (j < right.size())
		vec[k++] = right[j++];
}

void PmergeMe::mergeInsertSortDeque(std::deque<int> &deq)
{
	if (deq.size() < 2)
		return;

	size_t mid = deq.size() / 2;
	std::deque<int> left(deq.begin(), deq.begin() + mid);
	std::deque<int> right(deq.begin() + mid, deq.end());

	mergeInsertSortDeque(left);
	mergeInsertSortDeque(right);

	size_t i = 0, j = 0, k = 0;
	while (i < left.size() && j < right.size())
	{
		if (left[i] < right[j])
			deq[k++] = left[i++];
		else
			deq[k++] = right[j++];
	}
	while (i < left.size())
		deq[k++] = left[i++];
	while (j < right.size())
		deq[k++] = right[j++];
}

// print the elements along with a prefix message
void PmergeMe::printSequence(const std::string &prefix, const std::vector<int> &vec)
{
	std::cout << prefix;
	for (size_t i = 0; i < vec.size(); i++)
		std::cout << vec[i] << " ";
	std::cout << std::endl;
}

void PmergeMe::printSequence(const std::string &prefix, const std::deque<int> &deq)
{
	std::cout << prefix;
	for (size_t i = 0; i < deq.size(); i++)
		std::cout << deq[i] << " ";
	std::cout << std::endl;
}

// sorts a sequence of numbers in both vector and deque
void PmergeMe::sortAndMeasure(std::vector<int> vec, std::deque<int> deq)
{
	// print the unsorted numbers
	std::cout << std::endl;
	std::cout << "----------" << std::endl;
	printSequence("Before (vector): ", vec);
	std::cout << "----------" << std::endl;
	printSequence("Before (deque): ", deq);
	std::cout << "----------" << std::endl;

	// measure sorting time
	// stores the cpu clock time before sorting
	// stores the cpu clock time after sorting
	// calculates elapsed time in microseconds
	clock_t startVec = clock();
	mergeInsertSortVector(vec);
	clock_t endVec = clock();
	double timeVec = static_cast<double>(endVec - startVec) / CLOCKS_PER_SEC * 1000000;

	clock_t startDeq = clock();
	mergeInsertSortDeque(deq);
	clock_t endDeq = clock();
	double timeDeq = static_cast<double>(endDeq - startDeq) / CLOCKS_PER_SEC * 1000000;

	// print the sorted numbers
	std::cout << std::endl;
	std::cout << "----------" << std::endl;
	printSequence("After (vector): ", vec);
	std::cout << "----------" << std::endl;
	printSequence("After (deque): ", deq);
	std::cout << "----------" << std::endl;

	std::cout << std::endl << "Time to process a range of " << vec.size() << " elements with std::vector: " << timeVec << " us" << std::endl;
	std::cout << "Time to process a range of " << deq.size() << " elements with std::deque: " << timeDeq << " us" << std::endl;
}
