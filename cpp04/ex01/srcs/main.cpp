/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:13:27 by jarumuga          #+#    #+#             */
/*   Updated: 2024/12/17 15:58:09 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

int main()
{
	const int SIZE = 2;
	Animal* animals[SIZE];

	std::cout << std::endl << "---------------------------------------------------" << std::endl;
	std::cout << std::endl << "BRAIN" << std::endl;
	std::cout << std::endl << "---------------------------------------------------" << std::endl;

	std::cout << std::endl << "Dog constructors:" << std::endl;
	for (int i = 0; i < SIZE / 2; i++)
		animals[i] = new Dog();

	std::cout << std::endl << "Cat constructors:" << std::endl;
	for (int i = SIZE / 2; i < SIZE; i++)
		animals[i] = new Cat();

	std::cout << std::endl << "Testing sounds:" << std::endl;
	for (int i = 0; i < SIZE; i++)
		animals[i]->makeSound();

	std::cout << std::endl << "Deleting animals:" << std::endl;
	for (int i = 0; i < SIZE; i++)
		delete animals[i];

	std::cout << std::endl << "---------------------------------------------------" << std::endl;
	std::cout << std::endl << "DEEP COPY" << std::endl;
	std::cout << std::endl << "---------------------------------------------------" << std::endl;
	std::cout << std::endl << "Testing deep copy for Dog:" << std::endl;
	Dog originalDog;
	originalDog.setIdea(0, "Chase the ball");
	Dog copiedDog = originalDog;
	std::cout << "Original Dog idea: " << originalDog.getIdea(0) << std::endl;
	std::cout << "Copied Dog idea: " << copiedDog.getIdea(0) << std::endl;

	std::cout<< std::endl << "Testing deep copy for Cat:" << std::endl;
	Cat originalCat;
	originalCat.setIdea(0, "Climb the tree");
	Cat copiedCat = originalCat;
	std::cout << "Original Cat idea: " << originalCat.getIdea(0) << std::endl;
	std::cout << "Copied Cat idea: " << copiedCat.getIdea(0) << std::endl;

	std::cout << std::endl << "Deleting animals:" << std::endl;

	return (0);
}
