/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 14:28:29 by jarumuga          #+#    #+#             */
/*   Updated: 2025/01/27 10:29:25 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept>
#include <iostream>

template <typename T>
class Array
{
	private:
		T* _data;
		unsigned int _size;

	public:
		// default
		Array() : _data(NULL), _size(0) {}

		// with size
		Array(unsigned int n) : _data(new T[n]()), _size(n) {}

		// copy
		Array(const Array& other) : _data(NULL), _size(other._size)
		{
			if (_size > 0)
			{
				_data = new T[_size];
				for (unsigned int i = 0; i < _size; i++)
					_data[i] = other._data[i];
			}
		}

		// assignment
		Array& operator=(const Array& other)
		{
			if (this != &other)
			{
				delete[] _data;

				_size = other._size;
				_data = new T[_size];
				for (unsigned int i = 0; i < _size; ++i)
					_data[i] = other._data[i];
			}
			return (*this);
		}

		// destructor
		~Array()
		{
			delete[] _data;
		}

		// subscript
		T& operator[](unsigned int index)
		{
			if (index >= _size)
				throw (std::out_of_range("Index out of bounds"));
			return (_data[index]);
		}

		// size method
		unsigned int size() const
		{
			return (_size);
		}
};

#endif
