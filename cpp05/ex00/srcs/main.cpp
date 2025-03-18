/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 10:50:50 by jarumuga          #+#    #+#             */
/*   Updated: 2025/01/09 13:57:34 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

int main()
{
	std::cout << std::endl << "-----------------------------------------------" << std::endl;
	std::cout << "Normal Grade" << std::endl;
	std::cout << "-----------------------------------------------" << std::endl;
	try
	{
		Bureaucrat b1("Kiwi", 1);
		Bureaucrat b2("Fraise", 150);

		std::cout << b1 << std::endl;
		std::cout << b2 << std::endl;

		std::cout << "Attempting to increment grade of " << b1.getName() << "..." << std::endl;
		b1.incrementGrade(); // exception
	}
	catch (std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	std::cout << std::endl << "-----------------------------------------------" << std::endl;
	std::cout << "Low Grades" << std::endl;
	std::cout << "-----------------------------------------------" << std::endl;
	try
	{
		Bureaucrat b3("Banane", 151);  // exception
		std::cout << b3 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	std::cout << std::endl << "-----------------------------------------------" << std::endl;
	std::cout << "High Requirement" << std::endl;
	std::cout << "-----------------------------------------------" << std::endl;
	try
	{
		Bureaucrat b4("Orange", 0);  // exception
		std::cout << b4 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	std::cout << std::endl << "-----------------------------------------------" << std::endl;
	std::cout << "Increment and decrement" << std::endl;
	std::cout << "-----------------------------------------------" << std::endl;
	try
	{
		Bureaucrat b5("Peach", 2);
		std::cout << b5 << std::endl;

		std::cout << "Attempting to increment grade of " << b5.getName() << "..." << std::endl;
		b5.incrementGrade();
		std::cout << b5 << std::endl;

		std::cout << "Attempting to decrement grade of " << b5.getName() << "..." << std::endl;
		b5.decrementGrade();
		std::cout << b5 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	return (0);
}
