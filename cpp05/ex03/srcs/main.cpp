/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 10:50:50 by jarumuga          #+#    #+#             */
/*   Updated: 2025/01/09 16:26:17 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"

int main()
{
	Intern someRandomIntern;
	AForm* rrf = NULL;
	AForm* scf = NULL;
	AForm* ppf = NULL;
	AForm* cuf = NULL;
	Bureaucrat kiwi("Kiwi", 45);
	Bureaucrat fraise("Fraise", 137);
	Bureaucrat banane("Banane", 5);
	Bureaucrat peche("Peche", 1);

	try
	{
		std::cout << std::endl << "Creating a RobotomyRequestForm..." << std::endl;
		rrf = someRandomIntern.makeForm("robotomy request", "Kiwi");
		std::cout << *rrf << std::endl;
		kiwi.signForm(*rrf);
		kiwi.executeForm(*rrf);
		delete rrf;

		std::cout << "\nCreating a ShrubberyCreationForm..." << std::endl;
		scf = someRandomIntern.makeForm("shrubbery creation", "Banane");
		std::cout << *scf << std::endl;
		fraise.signForm(*scf);
		fraise.executeForm(*scf);
		delete scf;

		std::cout << "\nCreating a PresidentialPardonForm..." << std::endl;
		ppf = someRandomIntern.makeForm("presidential pardon", "Fraise");
		std::cout << *ppf << std::endl;
		banane.signForm(*ppf);
		banane.executeForm(*ppf);
		delete ppf;

		std::cout << "\nTrying to create an unknown form..." << std::endl;
		cuf = someRandomIntern.makeForm("unknown form", "Unknown");
		peche.signForm(*cuf);
		peche.executeForm(*cuf);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
