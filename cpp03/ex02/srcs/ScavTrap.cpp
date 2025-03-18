/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 17:44:36 by jarumuga          #+#    #+#             */
/*   Updated: 2024/12/13 16:07:29 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

// default
ScavTrap::ScavTrap() : ClapTrap()
{
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

// parameterized
ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << "ScavTrap parameterized constructor " << name << " created." << std::endl;
}

// copy
ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

// copy assignment operator
ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	ClapTrap::operator=(other);
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	return (*this);
}

// destructor
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << name << " destroyed" << std::endl;
}

// member functions
void ScavTrap::attack(const std::string& target)
{
	if (hitPoints <= 0)
		std::cout << "ScavTrap " << name << " can't attack, he is already dead!" << std::endl;
	else if (energyPoints <= 0)
		std::cout << "ScavTrap " << name << " can't attack, he has no energy!" << std::endl;
	else
	{
		--energyPoints;
		std::cout << "ScavTrap " << name << " attacks " << target << \
		", causing " << attackDamage << " points of damage! || energy : " << energyPoints << std::endl;
	}
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name << " is in Gate keeper mode!" << std::endl;
}
