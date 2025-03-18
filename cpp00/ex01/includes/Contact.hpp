/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 17:30:59 by jarumuga          #+#    #+#             */
/*   Updated: 2024/12/03 19:29:29 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

// class is a blueprint
// in private I have attribute : firstName, lastName, etc
// in public I have my functions :
	// to set my attribute
	// to print my info in short or full
	// to check if the contact is empty
class Contact
{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;

	public:
		Contact();
		void setContactInfo(const std::string& fName, \
		const std::string& lName, const std::string& nName, \
		const std::string& pNumber, const std::string& dSecret);
		void displayAllInfo(int index) const;
		void displayIndividualInfo() const;
		bool isEmpty() const;
};

#endif

