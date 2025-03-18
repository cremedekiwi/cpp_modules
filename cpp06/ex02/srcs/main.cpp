/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 13:38:15 by jarumuga          #+#    #+#             */
/*   Updated: 2025/01/16 14:23:58 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include <iostream>

#include "../includes/Base.hpp"
#include "../includes/A.hpp"
#include "../includes/B.hpp"
#include "../includes/C.hpp"

// It randomly instanciates A, B or C and returns the instance as a Base pointer.
Base* generate(void)
{
	static bool seeded = false; // retains its value between function calls
	if (!seeded)
	{
		srand(static_cast<unsigned int>(time(NULL))); // only called the very first time
		seeded = true;
	}

	int random = rand() % 3; // generate a random number from 0 to 2
	switch (random)
	{
		case 0:
			std::cout << "Generating A" << std::endl;
			return new A();
		case 1:
			std::cout << "Generating B" << std::endl;
			return new B();
		default:
			std::cout << "Generating C" << std::endl;
			return new C();

	}
}

// returns a ptr that's either valid or nullptr
void identify(Base* p)
{
	if (dynamic_cast<A*>(p)) // attempts to convert the ptr into a ptr of type A*
		std::cout << "Identified type: " << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Identified type: " << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Identified type: " << "C" << std::endl;
	else
		std::cerr << "Type couldn't be identified" << std::endl;
}

// returns a ref, it will throw an exception in case of failure
void identify(Base &p)
{
	// Try casting to A
	try
	{
		A &refA = dynamic_cast<A&>(p);
		(void)refA;
		// If we get here, the cast succeeded
		std::cout << "Identified type: " << "A" << std::endl;
		return ;
	}
	catch (...) // handle any type of exception
	{

	}

	// Try casting to B
	try
	{
		B &refB = dynamic_cast<B&>(p);
		(void)refB;
		std::cout << "Identified type: " << "B" << std::endl;
		return ;
	}
	catch (...)
	{

	}

	// Try casting to C
	try
	{
		C &refC = dynamic_cast<C&>(p);
		(void)refC;
		std::cout << "Identified type: " << "C" << std::endl;
		return ;
	}
	catch (...)
	{

	}

	// If none of the casts worked:
	std::cerr << "Type couldn't be identified" << std::endl;
}

int main()
{
	Base* basePtr = generate(); // pick an int from 0 to 2 ; return A, B or C
	identify(basePtr); // by Base* : print A, B or C
	identify(*basePtr); // by reference : print A, B or C
	delete basePtr;

	std::cout << "--------------------" << std::endl;

	for (int i = 1; i <= 4; i++)
	{
		Base* randomBase = generate();
		identify(randomBase);
		identify(*randomBase);
		delete randomBase;
		std::cout << "--------------------" << std::endl;
	}

	return (0);
}
