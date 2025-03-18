/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 17:38:27 by jarumuga          #+#    #+#             */
/*   Updated: 2024/12/16 17:39:32 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

// default
WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "WrongCat constructor called" << std::endl;
}

// copy
WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
}

// assignment operator
WrongCat& WrongCat::operator=(const WrongCat& other)
{
	if (this != &other)
		WrongAnimal::operator = (other);
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	return (*this);
}

// destructor
WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

// WrongCat-specific sound
void WrongCat::makeSound() const
{
	std::cout << "WrongCat sound: Meow!" << std::endl;
}
