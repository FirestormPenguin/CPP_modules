/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:05:32 by egiubell          #+#    #+#             */
/*   Updated: 2024/10/23 14:36:43 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <sys/time.h>

int main()
{
	std::vector<int> numbers;

	srand(time(NULL));

	int x = rand() % 30;
	int n;

	for(int i = 0; i < 20; i++)
		numbers.push_back(n = rand() % 20);

	std::cout << "Looking for number: " << x << std::endl;
	std::cout << std::endl;

	for(int i = 0; i < 20; i++)
		std::cout << i << " :" << numbers[i] << " " << std::endl;
	std::cout << std::endl;

	easyfind(numbers, x);
}
