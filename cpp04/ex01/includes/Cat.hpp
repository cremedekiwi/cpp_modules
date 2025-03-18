/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 19:06:43 by jarumuga          #+#    #+#             */
/*   Updated: 2024/12/17 15:56:45 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

// derived class
class Cat : public Animal
{
	private:
		Brain* brain;

	public:
		Cat(); // default
		Cat(const Cat& other); // copy
		Cat& operator=(const Cat& other); // assignment
		~Cat(); // destructor

		void makeSound() const; // override
		void setIdea(int index, const std::string& idea);
		std::string getIdea(int index) const;
};

#endif
