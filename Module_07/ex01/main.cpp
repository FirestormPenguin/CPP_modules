/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:28:21 by egiubell          #+#    #+#             */
/*   Updated: 2024/10/22 16:28:37 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <cstdlib>
#include <ctime>

template <typename T>
void print(T &value)
{
	std::cout << "Variables: " << value << std::endl;
}

void setRng(int &number)
{
	number = rand() % 100;
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	char str[] = "Hello";

	srand(time(NULL));

	std::cout << "Printing array: "<< std::endl;
	iter<int>(arr, 5, print);

	std::cout << "Setting random numbers: "<< std::endl;
	iter<int>(arr, 5, &setRng);

	std::cout << "Printing array: "<< std::endl;
	iter<int>(arr, 5, &print);

	std::cout << "Printing string: "<< std::endl;
	iter<char>(str, 5, &print);

	return 0;
}
