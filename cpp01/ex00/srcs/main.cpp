/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 19:10:36 by jarumuga          #+#    #+#             */
/*   Updated: 2024/12/05 18:42:05 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int main()
{
	// create a Zombie object with the name George on the stack
	// it is destroyed as soon as the function ends
	randomChump("George");

	// use new in the function to allocate memory
	// annonunce it
	// then delete it
	Zombie* z = newZombie("Kiwi");
	z->announce();
	delete z;

	return (0);
}
