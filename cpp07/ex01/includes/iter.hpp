/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 14:28:29 by jarumuga          #+#    #+#             */
/*   Updated: 2025/01/27 09:22:09 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>
#include <iostream>

// T is the type
template <typename T>
void iter(T* array, size_t length, void(*func)(const T&))
{
	for (size_t i = 0; i < length; ++i)
		func(array[i]);
}

// print template to apply to each element
template <typename T>
void printElement(const T& element)
{
	std::cout << element << " ";
}

#endif
