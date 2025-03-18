/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:45:39 by jarumuga          #+#    #+#             */
/*   Updated: 2024/12/03 19:31:57 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

// take the input, and set contact info
void	addContact(PhoneBook& phoneBook)
{
	std::string	firstName, lastName, nickName, phoneNumber, darkestSecret;

	std::cout << "Enter First Name: ";
	std::getline(std::cin, firstName);
	std::cout << "Enter Last Name: ";
	std::getline(std::cin, lastName);
	std::cout << "Enter Nickname: ";
	std::getline(std::cin, nickName);
	std::cout << "Enter Phone Number: ";
	std::getline(std::cin, phoneNumber);
	std::cout << "Enter Darkest Secret: ";
	std::getline(std::cin, darkestSecret);

	if (firstName.empty() || lastName.empty() || nickName.empty() \
	|| phoneNumber.empty() || darkestSecret.empty())
		std::cout << "All fields must be filled!" << std::endl;
	else
	{
		Contact newContact;
		newContact.setContactInfo(firstName, lastName, nickName, \
		phoneNumber, darkestSecret);
		phoneBook.addContactToIndex(newContact);
	}
}

// display the phonebook
// if you enter an index, you go to the detail of the contact
// std::cin.ignore() -> ignore the newline in the buffer
void	searchContact(const PhoneBook& phoneBook)
{
	int	index;

	phoneBook.displayAllContacts();
	std::cout << "Enter the index of the contact to display: ";
	std::cin >> index;
	std::cin.ignore();
	if (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(10000, '\n');
		std::cout << "Invalid index!" << std::endl;
		return ;
	}
	phoneBook.displayIndividualContact(index);
}

// infinite loop that check if you enter add, search or exit
int	main()
{
	PhoneBook	phonebook;
	std::string	command;

	while (true)
	{
		std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, command);

		if (command == "ADD")
			addContact(phonebook);
		else if (command == "SEARCH")
			searchContact(phonebook);
		else if (command == "EXIT")
			break ;
		else
			std::cout << "Invalid command!" << std::endl;
	}
	return (0);
}

