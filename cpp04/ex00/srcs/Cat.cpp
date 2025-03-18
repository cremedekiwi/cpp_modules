/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 19:15:16 by jarumuga          #+#    #+#             */
/*   Updated: 2024/12/16 17:40:10 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

// default
Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

// copy
Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << "Cat copy constructor called" << std::endl;
}

// assignment operator
Cat& Cat::operator=(const Cat& other)
{
	if (this != &other)
		Animal::operator = (other);
	std::cout << "Cat copy assignment operator called" << std::endl;
	return (*this);
}

// destructor
Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

// cat-specific sound
void Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}
