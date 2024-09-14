/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:20:02 by egiubell          #+#    #+#             */
/*   Updated: 2024/09/14 16:12:29 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data myData;
	myData.number = 42;
	myData.text = "Hello, World!";

	std::cout << "Original Data: " << myData.number << ", " << myData.text << std::endl;

	uintptr_t raw = Serializer::serialize(&myData);

	std::cout << "Serialized Data: " << raw << std::endl;

	Data* deserializedData = Serializer::deserialize(raw);

	std::cout << "Deserialized Data: " << deserializedData->number << ", " << deserializedData->text << std::endl;

	if (deserializedData == &myData)
	{
		std::cout << "Deserialization successful, pointers match!" << std::endl;
	} else
	{
		std::cout << "Deserialization failed, pointers do not match!" << std::endl;
	}

	return 0;
}
