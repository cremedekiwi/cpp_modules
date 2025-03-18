/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 10:50:50 by jarumuga          #+#    #+#             */
/*   Updated: 2025/01/09 14:22:58 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

int main()
{
	std::cout << std::endl << "-----------------------------------------------" << std::endl;
	std::cout << "Normal Grade" << std::endl;
	std::cout << "-----------------------------------------------" << std::endl;
	try
	{
		Form formA("A", 50, 25);
		Bureaucrat kiwi("Kiwi", 24);

		std::cout << std::endl << kiwi << std::endl;
		std::cout << formA << std::endl;

		std::cout << std::endl << "Kiwi attempts to sign form A:" << std::endl;
		kiwi.signForm(formA);
		std::cout << formA << std::endl << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "-----------------------------------------------" << std::endl;
	std::cout << "High Requirement" << std::endl;
	std::cout << "-----------------------------------------------" << std::endl;
	try
	{
		Form formB("B", 1, 1);
		Bureaucrat banane("Banane", 42);

		std::cout << std::endl << banane << std::endl;
		std::cout << formB << std::endl;

		std::cout << "\nBanane attempts to sign form B:" << std::endl;
		banane.signForm(formB);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "-----------------------------------------------" << std::endl;
	std::cout << "Low Grades" << std::endl;
	std::cout << "-----------------------------------------------" << std::endl;
	try
	{
		Form formC("C", 149, 149);
		Bureaucrat banane("Banane", 150);

		std::cout << std::endl << banane << std::endl;
		std::cout << formC << std::endl;

		std::cout << "\nBanane attempts to sign form C:" << std::endl;
		banane.signForm(formC);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
