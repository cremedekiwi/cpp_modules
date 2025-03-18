/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 19:02:15 by jarumuga          #+#    #+#             */
/*   Updated: 2024/12/16 17:28:15 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string type; // type of the animal

	public:
		Animal(); // default
		Animal(const Animal& other); // copy
		Animal& operator=(const Animal& other); // assignment
		virtual ~Animal(); // virtual destructor

		virtual void makeSound() const;
		std::string getType() const; // getter for the type
};

#endif
