/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 17:37:27 by jarumuga          #+#    #+#             */
/*   Updated: 2024/12/16 17:38:02 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

// derived class
class WrongCat : public WrongAnimal
{
	public:
		WrongCat(); // default
		WrongCat(const WrongCat& other); // copy
		WrongCat& operator=(const WrongCat& other); // assignment
		~WrongCat(); // destructor

		void makeSound() const; // override
};

#endif
