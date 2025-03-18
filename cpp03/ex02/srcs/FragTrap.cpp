/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 17:04:03 by jarumuga          #+#    #+#             */
/*   Updated: 2024/12/13 17:23:25 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

// default
FragTrap::FragTrap() : ClapTrap()
{
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}

// parameterized
FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap parameterized constructor " << name << " created." << std::endl;
}

// copy
FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

// copy assignment operator
FragTrap& FragTrap::operator=(const FragTrap& other)
{
	ClapTrap::operator=(other);
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	return (*this);
}

// destructor
FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << name << " destroyed" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << name << " request a high fives!" << std::endl;
}
