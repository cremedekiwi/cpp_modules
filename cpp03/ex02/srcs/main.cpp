/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:39:22 by jarumuga          #+#    #+#             */
/*   Updated: 2024/12/13 17:23:09 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"

int main()
{
	// Testing the FragTrap default constructor
	std::cout << "Testing Default Constructor:" << std::endl;
	FragTrap defaultFragTrap;

	// Testing the FragTrap parameterized constructor
	std::cout << std::endl << "Testing Parameterized Constructor:" << std::endl;
	FragTrap paramFragTrap("Kiwi");

	// Testing the FragTrap copy constructor
	std::cout << std::endl << "Testing Copy Constructor:" << std::endl;
	FragTrap copiedFragTrap(paramFragTrap);

	// Testing the FragTrap copy assignment operator
	std::cout << std::endl << "Testing Copy Assignment Operator:" << std::endl;
	FragTrap assignedFragTrap;
	assignedFragTrap = defaultFragTrap;

	// Additional testing for default constructor
	std::cout << std::endl << "Testing Default Constructor Usage:" << std::endl;
	defaultFragTrap.attack("DefaultTarget");
	defaultFragTrap.takeDamage(99);
	// defaultFragTrap.beRepaired(99);

	// Additional testing for parameterized constructor
	std::cout << std::endl << "Testing Copy Constructor Usage:" << std::endl;
	paramFragTrap.attack("ParamTarget");
	paramFragTrap.takeDamage(99);
	paramFragTrap.beRepaired(99);

	// Additional testing for copied constructor
	std::cout << std::endl << "Testing Copy Constructor Usage:" << std::endl;
	copiedFragTrap.attack("CopiedTarget");
	copiedFragTrap.takeDamage(99);
	copiedFragTrap.beRepaired(99);

	// Additional testing for assigned object
	std::cout << std::endl << "Testing Assigned Object Usage:" << std::endl;
	assignedFragTrap.attack("AssignedTarget");
	assignedFragTrap.takeDamage(99);
	assignedFragTrap.beRepaired(99);

	// Testing repair on low energy
	std::cout << std::endl << "Testing Repair on Low Energy:" << std::endl;
	for (int i = 0; i < 100; ++i)
		defaultFragTrap.beRepaired(9);

	// Testing attack with low energy
	std::cout << std::endl << "Testing Attack with Low Energy:" << std::endl;
	for (int i = 0; i < 99; ++i)
		paramFragTrap.attack("Clementine");

	// Testing take damage when HP is 0
	std::cout << std::endl << "Testing Take Damage When HP is 0:" << std::endl;
	for (int i = 0; i < 4; ++i)
		copiedFragTrap.takeDamage(40);

	std::cout << std::endl << "Testing highFivesGuys():" << std::endl;
	defaultFragTrap.highFivesGuys();

	// Destructor will be called as objects go out of scope
	std::cout << std::endl << "Testing Destructor Calls:" << std::endl;

	return (0);
}
