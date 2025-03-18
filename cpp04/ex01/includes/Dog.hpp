/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 19:05:58 by jarumuga          #+#    #+#             */
/*   Updated: 2024/12/17 15:56:10 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

// derived class
class Dog : public Animal
{
	private:
		Brain* brain;

	public:
		Dog(); // default
		Dog(const Dog& other); // copy
		Dog& operator=(const Dog& other); // assignment
		~Dog(); // destructor

		void makeSound() const; // override
		void setIdea(int index, const std::string& idea);
		std::string getIdea(int index) const;
};

#endif
