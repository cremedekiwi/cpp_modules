/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 17:34:28 by jarumuga          #+#    #+#             */
/*   Updated: 2024/12/16 17:36:41 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

// default
WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << "WrongAnimal constructor called" << std::endl;
}

// copy
WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

// assignment operator
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	if (this != &other)
		type = other.type;
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	return (*this);
}

// destructor
WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

// default sound
void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal makes a generic sound" << std::endl;
}

// getter for the type
std::string WrongAnimal::getType() const
{
	return (type);
}
