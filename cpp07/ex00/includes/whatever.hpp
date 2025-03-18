/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 14:28:29 by jarumuga          #+#    #+#             */
/*   Updated: 2025/01/27 09:05:01 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

// template function
// i can swap, min, max any types

template <typename T>
void swap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

template <typename T>
T min(const T &a, const T &b)
{
	return (a < b ? a : b);
}

template <typename T>
T max(const T &a, const T &b)
{
	return (a > b ? a : b);
}

#endif
