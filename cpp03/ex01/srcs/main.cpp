/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:39:22 by jarumuga          #+#    #+#             */
/*   Updated: 2024/12/13 18:23:04 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"

int main()
{
	// Testing the ScavTrap default constructor
	std::cout << "Testing Default Constructor:" << std::endl;
	ScavTrap defaultScavTrap;

	// Testing the ScavTrap parameterized constructor
	std::cout << std::endl << "Testing Parameterized Constructor:" << std::endl;
	ScavTrap paramScavTrap("Kiwi");

	// Testing the ScavTrap copy constructor
	std::cout << std::endl << "Testing Copy Constructor:" << std::endl;
	ScavTrap copiedScavTrap(paramScavTrap);

	// Testing the ScavTrap copy assignment operator
	std::cout << std::endl << "Testing Copy Assignment Operator:" << std::endl;
	ScavTrap assignedScavTrap;
	assignedScavTrap = defaultScavTrap;

	// Additional testing for default constructor
	std::cout << std::endl << "Testing Default Constructor Usage:" << std::endl;
	defaultScavTrap.attack("DefaultTarget");
	defaultScavTrap.takeDamage(99);

	// Additional testing for parameterized constructor
	std::cout << std::endl << "Testing Copy Constructor Usage:" << std::endl;
	paramScavTrap.attack("ParamTarget");
	paramScavTrap.takeDamage(99);
	paramScavTrap.beRepaired(99);

	// Additional testing for copied constructor
	std::cout << std::endl << "Testing Copy Constructor Usage:" << std::endl;
	copiedScavTrap.attack("CopiedTarget");
	copiedScavTrap.takeDamage(99);
	copiedScavTrap.beRepaired(99);

	// Additional testing for assigned object
	std::cout << std::endl << "Testing Assigned Object Usage:" << std::endl;
	assignedScavTrap.attack("AssignedTarget");
	assignedScavTrap.takeDamage(99);
	assignedScavTrap.beRepaired(99);

	// Testing repair on low energy
	std::cout << std::endl << "Testing Repair on Low Energy:" << std::endl;
	for (int i = 0; i < 50; ++i)
		defaultScavTrap.beRepaired(9);

	// Testing attack with low energy
	std::cout << std::endl << "Testing Attack with Low Energy:" << std::endl;
	for (int i = 0; i < 49; ++i)
		paramScavTrap.attack("Clementine");

	// Testing take damage when HP is 0
	std::cout << std::endl << "Testing Take Damage When HP is 0:" << std::endl;
	for (int i = 0; i < 4; ++i)
		copiedScavTrap.takeDamage(40);

	std::cout << std::endl << "Testing guardGate():" << std::endl;
	defaultScavTrap.guardGate();

	// Destructor will be called as objects go out of scope
	std::cout << std::endl << "Testing Destructor Calls:" << std::endl;

	return (0);
}
