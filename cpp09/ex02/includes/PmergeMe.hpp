/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 13:30:05 by jarumuga          #+#    #+#             */
/*   Updated: 2025/02/04 14:06:37 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <ctime>
#include <sstream>
#include <cstdlib>
#include <stdexcept>

class PmergeMe
{
	private:
		void mergeInsertSortVector(std::vector<int> &vec);
		void mergeInsertSortDeque(std::deque<int> &deq);

		void printSequence(const std::string &prefix, const std::vector<int> &vec);
		void printSequence(const std::string &prefix, const std::deque<int> &deq);

	public:
		PmergeMe();
		PmergeMe(const PmergeMe &other);
		PmergeMe &operator=(const PmergeMe &other);
		~PmergeMe();

		void sortAndMeasure(std::vector<int> vec, std::deque<int> deq);
};

#endif
