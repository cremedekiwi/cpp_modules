/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 19:15:16 by jarumuga          #+#    #+#             */
/*   Updated: 2024/12/17 15:57:14 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

// default
Cat::Cat() : brain(new Brain)
{
	type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

// copy
Cat::Cat(const Cat& other) : brain(new Brain(*other.brain))
{
	type = other.type;
	std::cout << "Cat copy constructor called" << std::endl;
}

// assignment operator
Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &other)
	{
		delete brain;
		brain = new Brain(*other.brain);
		type = other.type;
	}
	return (*this);
}

// destructor
Cat::~Cat()
{
	delete brain;
	std::cout << "Cat destructor called" << std::endl;
}

// cat-specific sound
void Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}

void Cat::setIdea(int index, const std::string& idea)
{
	brain->setIdea(index, idea);
}

std::string Cat::getIdea(int index) const
{
	return brain->getIdea(index);
}
