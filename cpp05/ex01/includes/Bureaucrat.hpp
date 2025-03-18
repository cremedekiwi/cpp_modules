/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 10:36:37 by jarumuga          #+#    #+#             */
/*   Updated: 2025/01/09 13:58:13 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "../includes/Form.hpp"
#include <string>
#include <iostream>
#include <stdexcept>

class Bureaucrat
{
	private:
		const std::string name;
		int grade;

	public:
		// exceptions for grades
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

		// constructors and destructor
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat& operator=(const Bureaucrat& other);
		~Bureaucrat();

		const std::string &getName() const;
		int getGrade() const;
		void incrementGrade();
		void decrementGrade();
		void signForm(class Form &form) const;
};

// overloaded output operator to display Bureaucrat details
std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif
