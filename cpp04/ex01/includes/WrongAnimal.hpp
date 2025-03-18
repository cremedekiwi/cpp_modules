/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 17:34:30 by jarumuga          #+#    #+#             */
/*   Updated: 2024/12/16 17:35:59 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
	protected:
		std::string type; // type of the animal

	public:
		WrongAnimal(); // default
		WrongAnimal(const WrongAnimal& other); // copy
		WrongAnimal& operator=(const WrongAnimal& other); // assignment
		virtual ~WrongAnimal(); // virtual destructor

		void makeSound() const;
		std::string getType() const; // getter for the type
};

#endif
