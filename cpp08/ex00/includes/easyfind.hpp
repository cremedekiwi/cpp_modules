/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 11:18:01 by jarumuga          #+#    #+#             */
/*   Updated: 2025/01/28 14:08:15 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream> // cout
#include <algorithm> // find
#include <iterator>
#include <exception>

template <typename T>
typename T::iterator easyfind(T &container, int value)
{
	// find : searches for value in the range begin / end
	// if find return the value, otherwise return the .end
	typename T::iterator it = std::find(container.begin(), container.end(), value);
	// if the value is .end, throw and exception
	if (it == container.end())
		throw std::runtime_error("Value not found");
	// otherwise return the value
	return (it);
}

#endif
