/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 19:02:15 by jarumuga          #+#    #+#             */
/*   Updated: 2024/12/17 15:40:51 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal
{
	protected:
		std::string type; // type of the animal

	public:
		AAnimal(); // default
		AAnimal(const AAnimal& other); // copy
		AAnimal& operator=(const AAnimal& other); // assignment
		virtual ~AAnimal(); // virtual destructor

		// virtual indicates that the method is intended to be overridden
		// = 0 makes the method a pure virual function (abstract), it cannot be instantiated
		// const means the method does not modify any member variables of the class
		virtual void makeSound() const = 0;
		std::string getType() const; // getter for the type
};

#endif
