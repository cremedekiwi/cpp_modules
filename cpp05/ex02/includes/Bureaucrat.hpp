/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 10:36:37 by jarumuga          #+#    #+#             */
/*   Updated: 2025/01/09 14:00:34 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <stdexcept>

class AForm;

class Bureaucrat
{
	private:
		const std::string name;
		int grade;

	public:
		// canonical form
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat& operator=(const Bureaucrat& other);
		~Bureaucrat();

		// exceptions
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		// getters
		const std::string &getName() const;
		int getGrade() const;

		// members functions
		void incrementGrade();
		void decrementGrade();
		void signForm(class AForm &aform) const;
		void executeForm(const AForm &form) const;
};

// overloaded output operator to display Bureaucrat details
std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif
