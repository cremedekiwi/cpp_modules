/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 19:10:36 by jarumuga          #+#    #+#             */
/*   Updated: 2024/12/05 18:41:38 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int main()
{
	// assign N, name and create an object horde
	int N = 5;
	std::string name = "Zombie";
	Zombie* horde = zombieHorde(N, name);

	// if it failed, print an error
	if (horde == NULL)
	{
		std::cerr << "Error: Could not create zombie horde." << std::endl;
		return (1);
	}

	// print the message for each Zombie
	for (int i = 0; i < N; i++)
		horde[i].announce();

	// delete the array
	delete[] horde;

	return (0);
}
