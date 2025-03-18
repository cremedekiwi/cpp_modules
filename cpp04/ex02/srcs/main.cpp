/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:13:27 by jarumuga          #+#    #+#             */
/*   Updated: 2024/12/17 15:37:38 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AAnimal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

int main()
{
	const int SIZE = 2;
	AAnimal* aanimals[SIZE];

	std::cout << std::endl << "---------------------------------------------------" << std::endl;
	std::cout << std::endl << "BRAIN" << std::endl;
	std::cout << std::endl << "---------------------------------------------------" << std::endl;

	std::cout << std::endl << "Dog constructors:" << std::endl;
	for (int i = 0; i < SIZE / 2; i++)
		aanimals[i] = new Dog();

	std::cout << std::endl << "Cat constructors:" << std::endl;
	for (int i = SIZE / 2; i < SIZE; i++)
		aanimals[i] = new Cat();

	std::cout << std::endl << "Testing sounds:" << std::endl;
	for (int i = 0; i < SIZE; i++)
		aanimals[i]->makeSound();

	std::cout << std::endl << "Deleting aanimals:" << std::endl;
	for (int i = 0; i < SIZE; i++)
		delete aanimals[i];

	std::cout << std::endl << "---------------------------------------------------" << std::endl;
	std::cout << std::endl << "DEEP COPY" << std::endl;
	std::cout << std::endl << "---------------------------------------------------" << std::endl;
	std::cout << std::endl << "Testing deep copy for Dog:" << std::endl;
	Dog originalDog;
	Dog copiedDog = originalDog;

	std::cout<< std::endl << "Testing deep copy for Cat:" << std::endl;
	Cat originalCat;
	Cat copiedCat = originalCat;

	AAnimal testAnimal; 

	std::cout << std::endl << "Deleting aanimals:" << std::endl;

	return (0);
}
