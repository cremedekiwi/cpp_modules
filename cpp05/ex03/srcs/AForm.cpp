/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 12:26:46 by jarumuga          #+#    #+#             */
/*   Updated: 2025/01/09 14:01:34 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AForm.hpp"

// canonical form
AForm::AForm(const std::string &name, int gradeToSign, int gradeToExecute)
	: name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
	std::cout << "AForm " << name << " constructor called" << std::endl;
}

AForm::AForm(const AForm& other)
	: name(other.name), isSigned(other.isSigned), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute)
{
	std::cout << "AForm copy constructor called" << std::endl;
}

AForm& AForm::operator=(const AForm& other)
{
	if (this != &other)
		isSigned = other.isSigned;
	std::cout << "AForm copy assignment operator called" << std::endl;
	return (*this);
}

AForm::~AForm()
{
	std::cout << "AForm " << name << " destructor called" << std::endl;
}

const std::string &AForm::getName() const
{
	return (name);
}

bool AForm::getIsSigned() const
{
	return (isSigned);
}

int AForm::getGradeToSign() const
{
	return (gradeToSign);
}

int AForm::getGradeToExecute() const
{
	return (gradeToExecute);
}

// member functions
void AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > gradeToSign)
		throw GradeTooLowException();
	isSigned = true;
}

void AForm::execute(const Bureaucrat &executor) const
{
	if (!isSigned)
		throw FormNotSignedException();
	if (executor.getGrade() > gradeToExecute)
		throw GradeTooLowException();
	executeAction();
}

// exceptions
const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too high!");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too low!");
}

const char* AForm::FormNotSignedException::what() const throw()
{
	return ("Form is not signed!");
}

std::ostream &operator<<(std::ostream &os, const AForm &form)
{
	os << "Form " << form.getName()
		<< ", Signed: " << (form.getIsSigned() ? "Yes" : "No")
		<< ", Grade to Sign: " << form.getGradeToSign()
		<< ", Grade to Execute: " << form.getGradeToExecute();
	return (os);
}
