/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 17:43:46 by jarumuga          #+#    #+#             */
/*   Updated: 2024/12/03 19:29:16 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

// init contact field
Contact::Contact() {}

// assign contact info
void	Contact::setContactInfo(const std::string& fName, \
const std::string& lName, const std::string& nick, const std::string& phone, \
const std::string& secret)
{
	firstName = fName;
	lastName = lName;
	nickName = nick;
	phoneNumber = phone;
	darkestSecret = secret;
}

// display short info
// if it's more than 10 char, add a '.' to the 9 char and a |
void	Contact::displayAllInfo(int index) const
{
	std::cout << std::setw(10) << index << "|";
	std::cout << std::setw(10) << (firstName.length() > 10 ? \
	firstName.substr(0, 9) + "." : firstName) << "|";
	std::cout << std::setw(10) << (lastName.length() > 10 ? \
	lastName.substr(0, 9) + "." : lastName) << "|";
	std::cout << std::setw(10) << (nickName.length() > 10 ? \
	nickName.substr(0, 9) + "." : nickName) << std::endl;
}

// display full info
// print the variable with a newline
void	Contact::displayIndividualInfo() const
{
	std::cout << "First Name: " << firstName << std::endl;
	std::cout << "Last Name: " << lastName << std::endl;
	std::cout << "Nickname: " << nickName << std::endl;
	std::cout << "Phone Number: " << phoneNumber << std::endl;
	std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}

// check if the first case is empty
bool	Contact::isEmpty() const
{
	return firstName.empty();
}
