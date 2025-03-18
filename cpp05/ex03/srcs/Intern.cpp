/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 14:53:53 by jarumuga          #+#    #+#             */
/*   Updated: 2025/01/09 16:36:00 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"

// static member functions for form creation
AForm* Intern::createShrubbery(const std::string& target)
{
	return new ShrubberyCreationForm(target);
}

AForm* Intern::createRobotomy(const std::string& target)
{
	return new RobotomyRequestForm(target);
}

AForm* Intern::createPresidentialPardon(const std::string& target)
{
	return new PresidentialPardonForm(target);
}

// canonical form
Intern::Intern()
{
	std::cout << "Intern constructor called" << std::endl;
}

Intern::Intern(const Intern& other)
{
	(void)other;
	std::cout << "Intern copy constructor called" << std::endl;
}

Intern& Intern::operator=(const Intern& other)
{
	(void)other;
	std::cout << "Intern copy assignment operator called" << std::endl;
	return (*this);
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
}

// exceptions
const char* Intern::FormNotFoundException::what() const throw()
{
	return ("Intern: Form name not found!");
}

// member function
AForm* Intern::makeForm(const std::string& formName, const std::string& target)
{
	struct FormType
	{
		const char* name;
		FormCreator createFunction;
	};

	FormType forms[] =
	{
		{"shrubbery creation", &Intern::createShrubbery},
		{"robotomy request", &Intern::createRobotomy},
		{"presidential pardon", &Intern::createPresidentialPardon},
	};

	for (size_t i = 0; i < sizeof(forms) / sizeof(forms[0]); ++i)
	{
		if (formName.compare(forms[i].name) == 0)
		{
			std::cout << "Intern creates " << formName << std::endl;
			return forms[i].createFunction(target);
		}
	}
	throw FormNotFoundException();
}

