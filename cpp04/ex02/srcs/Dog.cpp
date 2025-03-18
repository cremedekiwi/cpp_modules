/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 19:15:19 by jarumuga          #+#    #+#             */
/*   Updated: 2024/12/17 14:01:06 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

// default
Dog::Dog() : brain(new Brain)
{
	type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
}

// copy
Dog::Dog(const Dog& other) : brain(new Brain(*other.brain))
{
	type = other.type;
	std::cout << "Dog copy constructor called" << std::endl;
}

// assignment operator
Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &other)
	{
		delete brain;
		brain = new Brain(*other.brain);
		type = other.type;
	}
	return (*this);
}

// destructor
Dog::~Dog()
{
	delete brain;
	std::cout << "Dog destructor called" << std::endl;
}

// dog-specific sound
void Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}
