/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:39:22 by jarumuga          #+#    #+#             */
/*   Updated: 2024/12/13 16:53:44 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int main()
{
	// Testing the default constructor
	std::cout << "Testing Default Constructor:" << std::endl;
	ClapTrap defaultClapTrap;

	// Testing the parameterized constructor
	std::cout << std::endl << "Testing Parameterized Constructor:" << std::endl;
	ClapTrap paramClapTrap("Kiwi");

	// Testing the copy constructor
	std::cout << std::endl << "Testing Copy Constructor:" << std::endl;
	ClapTrap copiedClapTrap(paramClapTrap);

	// Testing the copy assignment operator
	std::cout << std::endl << "Testing Copy Assignment Operator:" << std::endl;
	ClapTrap assignedClapTrap;
	assignedClapTrap = defaultClapTrap;

	// Additional testing for default constructor
	std::cout << std::endl << "Testing Default Constructor Usage:" << std::endl;
	defaultClapTrap.attack("DefaultTarget");
	defaultClapTrap.takeDamage(9);
	defaultClapTrap.beRepaired(9);

	// Additional testing for parameterized constructor
	std::cout << std::endl << "Testing Copy Constructor Usage:" << std::endl;
	paramClapTrap.attack("ParamTarget");
	paramClapTrap.takeDamage(9);
	paramClapTrap.beRepaired(9);

	// Additional testing for copied constructor
	std::cout << std::endl << "Testing Copy Constructor Usage:" << std::endl;
	copiedClapTrap.attack("CopiedTarget");
	copiedClapTrap.takeDamage(9);
	copiedClapTrap.beRepaired(9);

	// Additional testing for assigned object
	std::cout << std::endl << "Testing Assigned Object Usage:" << std::endl;
	assignedClapTrap.attack("AssignedTarget");
	assignedClapTrap.takeDamage(9);
	assignedClapTrap.beRepaired(9);

	// Testing repair on low energy
	std::cout << std::endl << "Testing Repair on Low Energy:" << std::endl;
	for (int i = 0; i < 9; ++i)
		defaultClapTrap.beRepaired(1);

	// Testing attack with low energy
	std::cout << std::endl << "Testing Attack with Low Energy:" << std::endl;
	for (int i = 0; i < 9; ++i)
		paramClapTrap.attack("Clementine");

	// Testing take damage when HP is 0
	std::cout << std::endl << "Testing Take Damage When HP is 0:" << std::endl;
	for (int i = 0; i < 6; ++i)
		copiedClapTrap.takeDamage(2);

	// Destructor will be called as objects go out of scope
	std::cout << std::endl << "Testing Destructor Calls:" << std::endl;

	return (0);
}
