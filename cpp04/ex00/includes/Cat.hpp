/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 19:06:43 by jarumuga          #+#    #+#             */
/*   Updated: 2024/12/16 17:32:16 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

// derived class
class Cat : public Animal
{
	public:
		Cat(); // default
		Cat(const Cat& other); // copy
		Cat& operator=(const Cat& other); // assignment
		~Cat(); // destructor

		void makeSound() const; // override
};

#endif
