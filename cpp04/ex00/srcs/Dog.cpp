/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 19:15:19 by jarumuga          #+#    #+#             */
/*   Updated: 2024/12/16 17:33:11 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

// default
Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
}

// copy
Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << "Dog copy constructor called" << std::endl;
}

// assignment operator
Dog& Dog::operator=(const Dog& other)
{
	if (this != &other)
		Animal::operator = (other);
	std::cout << "Dog copy assignment operator called" << std::endl;
	return (*this);
}

// destructor
Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

// dog-specific sound
void Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}
