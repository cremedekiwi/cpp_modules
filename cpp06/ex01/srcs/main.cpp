/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 13:38:15 by jarumuga          #+#    #+#             */
/*   Updated: 2025/01/16 13:16:01 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serializer.hpp"
#include "../includes/Data.hpp"
#include <iostream>

int main()
{
	Data myData;
	myData.x = 42;
	myData.y = 2025;
	myData.info = "hello world!";

	std::cout << "Original data address: " << &myData << std::endl;
	std::cout << "myData.x = " << myData.x << std::endl;
	std::cout << "myData.y = " << myData.y << std::endl;
	std::cout << "myData.info = " << myData.info << std::endl;
	std::cout << std::endl;

	uintptr_t raw = Serializer::serialize(&myData);
	Data *deserializedData = Serializer::deserialize(raw);

	std::cout << "Deserialized data address: " << deserializedData << std::endl;
	std::cout << "deserializedData->x = " << deserializedData->x << std::endl;
	std::cout << "deserializedData->y = " << deserializedData->y << std::endl;
	std::cout << "deserializedData->info = " << deserializedData->info << std::endl;
	std::cout << std::endl;

	if (deserializedData == &myData)
		std::cout << "SUCCESS: The pointers are the same!" << std::endl;
	else
		std::cout << "ERROR: The pointers differ!" << std::endl;

	return (0);

}
