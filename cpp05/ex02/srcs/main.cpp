/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 10:50:50 by jarumuga          #+#    #+#             */
/*   Updated: 2025/01/09 15:13:31 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"

int main()
{
	try
	{
		std::cout << std::endl << "-----------------------------------------------" << std::endl;
		std::cout << "Constructors" << std::endl;
		std::cout << "-----------------------------------------------" << std::endl;

		Bureaucrat kiwi("Kiwi", 45);
		ShrubberyCreationForm shrubbery("home");
		RobotomyRequestForm robotomy("Robot");
		PresidentialPardonForm pardon("Fraise");

		std::cout << std::endl << "-----------------------------------------------" << std::endl;
		std::cout << "Signed and executed" << std::endl;
		std::cout << "-----------------------------------------------" << std::endl;
		std::cout << shrubbery << std::endl;
		kiwi.signForm(shrubbery);
		kiwi.executeForm(shrubbery);

		std::cout << robotomy << std::endl;
		kiwi.signForm(robotomy);
		kiwi.executeForm(robotomy);

		std::cout << pardon << std::endl;
		kiwi.signForm(pardon);
		kiwi.executeForm(pardon);

		std::cout << std::endl << "-----------------------------------------------" << std::endl;
		std::cout << "Destructors" << std::endl;
		std::cout << "-----------------------------------------------" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
