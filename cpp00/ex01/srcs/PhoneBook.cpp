/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 09:23:39 by jarumuga          #+#    #+#             */
/*   Updated: 2024/12/03 19:32:38 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

// init phonebook
PhoneBook::PhoneBook() : index(0), size(0) {}

// if more than 8 contacts, replace the oldest contact
// for example if index = 7, (index + 1) % 8 = 0 (replace first slot)
// size keep tracks of number of contacts in the phonebook
void	PhoneBook::addContactToIndex(const Contact& contact)
{
	contacts[index] = contact;
	index = (index + 1) % 8;
	if (size < 8)
		size++;
}

// print the contacts
void	PhoneBook::displayAllContacts() const
{
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nickname" << std::endl;
	for (int i = 0; i < size; ++i)
		contacts[i].displayAllInfo(i);
}

// print the contact
void	PhoneBook::displayIndividualContact(int index) const
{
	if (index < 0 || index >= size || contacts[index].isEmpty())
		std::cout << "Invalid index!" << std::endl;
	else
		contacts[index].displayIndividualInfo();
}
