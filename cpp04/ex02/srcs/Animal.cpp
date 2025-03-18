/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 19:08:08 by jarumuga          #+#    #+#             */
/*   Updated: 2024/12/17 15:26:40 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AAnimal.hpp"

// default
AAnimal::AAnimal() : type("AAnimal")
{
	std::cout << "AAnimal constructor called" << std::endl;
}

// copy
AAnimal::AAnimal(const AAnimal& other) : type(other.type)
{
	std::cout << "AAnimal copy constructor called" << std::endl;
}

// assignment operator
AAnimal& AAnimal::operator=(const AAnimal& other)
{
	if (this != &other)
		type = other.type;
	std::cout << "AAnimal copy assignment operator called" << std::endl;
	return (*this);
}

// destructor
AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called" << std::endl;
}

// default sound
void AAnimal::makeSound() const
{
	std::cout << "AAnimal makes a generic sound" << std::endl;
}

// getter for the type
std::string AAnimal::getType() const
{
	return (type);
}
