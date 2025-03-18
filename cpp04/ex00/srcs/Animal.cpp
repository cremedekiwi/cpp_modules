/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 19:08:08 by jarumuga          #+#    #+#             */
/*   Updated: 2024/12/16 17:52:19 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

// default
Animal::Animal() : type("Animal")
{
	std::cout << "Animal constructor called" << std::endl;
}

// copy
Animal::Animal(const Animal& other) : type(other.type)
{
	std::cout << "Animal copy constructor called" << std::endl;
}

// assignment operator
Animal& Animal::operator=(const Animal& other)
{
	if (this != &other)
		type = other.type;
	std::cout << "Animal copy assignment operator called" << std::endl;
	return (*this);
}

// destructor
Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

// default sound
void Animal::makeSound() const
{
	std::cout << "Animal makes a generic sound" << std::endl;
}

// getter for the type
std::string Animal::getType() const
{
	return (type);
}
