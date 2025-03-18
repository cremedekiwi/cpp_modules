/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 14:35:32 by jarumuga          #+#    #+#             */
/*   Updated: 2025/01/09 16:35:55 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "../includes/AForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include <string>
#include <iostream>



class Intern
{
	private:
		// typedef for form creation function pointer
		typedef AForm* (*FormCreator)(const std::string&);

		// static member functions for form creation
		static AForm* createShrubbery(const std::string& target);
		static AForm* createRobotomy(const std::string& target);
		static AForm* createPresidentialPardon(const std::string& target);

	public:
		// canonical form
		Intern();
		Intern(const Intern& other);
		Intern& operator=(const Intern& other);
		~Intern();

		// exception
		class FormNotFoundException : public std::exception
		{
			public:
				const char* what() const throw();
		};

		// member function
		AForm* makeForm(const std::string& formName, const std::string& target);
};

#endif
