/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 18:51:28 by jarumuga          #+#    #+#             */
/*   Updated: 2024/12/05 15:49:40 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
	private:
		std::string name;

	public:
		Zombie(const std::string& zombieName); // constructor
		~Zombie(); // destructor
		
		void announce() const; // print a message
};

Zombie* newZombie(std::string name); // in the heap
void randomChump(std::string name); // in the stack

#endif
