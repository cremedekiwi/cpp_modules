/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:13:27 by jarumuga          #+#    #+#             */
/*   Updated: 2024/12/16 17:51:00 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

int main()
{
	std::cout << std::endl << "---------------------------------------------------" << std::endl;
	std::cout << std::endl << "Polymorphism with Animal hierarchy" << std::endl;
	std::cout << std::endl << "---------------------------------------------------" << std::endl;
	std::cout << std::endl << "Constructors:" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl << "Output the type of each object:" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	std::cout << std::endl << "Call makeSound()" << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl << "Destructors:" << std::endl;
	delete meta;
	delete j;
	delete i;

	std::cout << std::endl << "---------------------------------------------------" << std::endl;
	std::cout << std::endl << "Non-polymorphic behavior with WrongAnimal hierarchy" << std::endl;
	std::cout << std::endl << "---------------------------------------------------" << std::endl;
	std::cout << std::endl << "Constructors:" << std::endl;
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << std::endl << "Output the type of each object:" << std::endl;
	std::cout << wrongCat->getType() << " " << std::endl;

	std::cout << std::endl << "Call makeSound() (non-virtual)" << std::endl;
	wrongCat->makeSound();
	wrongMeta->makeSound();

	std::cout << std::endl << "Destructors:" << std::endl;
	delete wrongMeta;
	delete wrongCat;

	return (0);
}
