/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 19:05:58 by jarumuga          #+#    #+#             */
/*   Updated: 2024/12/16 17:30:35 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

// derived class
class Dog : public Animal
{
	public:
		Dog(); // default
		Dog(const Dog& other); // copy
		Dog& operator=(const Dog& other); // assignment
		~Dog(); // destructor

		void makeSound() const; // override
};

#endif
