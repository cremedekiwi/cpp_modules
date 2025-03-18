/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 14:51:48 by jarumuga          #+#    #+#             */
/*   Updated: 2024/12/13 16:05:25 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

// default
ClapTrap::ClapTrap() : name("Default"), hitPoints(10), \
energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

// parameterized
ClapTrap::ClapTrap(const std::string& name) : name(name), hitPoints(10), \
energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap parameterized constructor " << name << " created." << std::endl;
}

// copy
ClapTrap::ClapTrap(const ClapTrap& other) : \
name(other.name), hitPoints(other.hitPoints), \
energyPoints(other.energyPoints), attackDamage(other.attackDamage)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

// copy assignment operator
ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		name = other.name;
		hitPoints = other.hitPoints;
		energyPoints = other.energyPoints;
		attackDamage = other.attackDamage;
	}
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	return (*this);
}

// destructor
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap "<< name << " destroyed" << std::endl;
}

// member functions

void ClapTrap::attack(const std::string& target)
{
	if (hitPoints <= 0)
		std::cout << "ClapTrap " << name << " can't attack, he is already dead!" << std::endl;
	else if (energyPoints <= 0)
		std::cout << "ClapTrap " << name << " can't attack, he has no energy!" << std::endl;
	else
	{
		--energyPoints;
		std::cout << "ClapTrap " << name << " attacks " << target << \
		", causing " << attackDamage << " points of damage! || energy : " << energyPoints << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints <= 0)
		std::cout << "ClapTrap " << name << " is already dead, he can't take more damage!" << std::endl;
	else
	{
		if (amount >= hitPoints) // if damage greater than health, health = 0
			hitPoints = 0;
		else
			hitPoints -= amount; // else decrease damage to health
		std::cout << "ClapTrap " << name << " takes " << amount \
		<< " points of damage! || health : " << hitPoints <<  std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	// std::cout << "EnergyPoints: " << energyPoints << std::endl;
	if (hitPoints <= 0)
		std::cout << "ClapTrap " << name << " is dead, he can't repair itself!" << std::endl;
	else if (energyPoints <= 0)
		std::cout << "ClapTrap " << name << " can't repair itself, he has no energy points left!" << std::endl;
	if (energyPoints > 0 && hitPoints > 0) // if he has energy and health
	{
		--energyPoints;
		hitPoints += amount; // increase the health
		std::cout << "ClapTrap " << name << " repairs itself for " << amount << \
		" hit points! || health : " << hitPoints << " ; energy : " << energyPoints << std::endl;
	}
}
