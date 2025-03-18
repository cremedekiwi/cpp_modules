/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 13:06:08 by jarumuga          #+#    #+#             */
/*   Updated: 2025/01/15 15:37:02 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serializer.hpp"

Serializer::Serializer() {}
Serializer::~Serializer() {}
Serializer::Serializer(const Serializer &) {}
Serializer &Serializer::operator=(const Serializer &) { return *this; }

// reinterpret_cast tells the compiler to convert the bit-pattern
// of the pointer directly to an integer type (and vice versa).

// convert a pointer to a Data object into a raw integer form uintptr_t
uintptr_t Serializer::serialize(Data* ptr)
{
	// reinterpret_cast tells the compiler to convert the bit-pattern
	return (reinterpret_cast<uintptr_t>(ptr));
}

// convert it back
Data* Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

