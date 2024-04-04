/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 18:21:50 by egiubell          #+#    #+#             */
/*   Updated: 2024/04/04 19:02:59 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main ( void )
{
	if ( bsp( Point(0, 0), Point(10, 30), Point(20, 0), Point(10, 15) ) == true )
	{
		std::cout << "Point is in the triangle" << std::endl;
	}
	else
	{
		std::cout << "Point is not in the triangle" << std::endl;
	}
	return 0;
}

/*
Input: A = (0, 0), B = (10, 30), C = (20, 0), P(10, 15)
Output: Inside
Explanation:
			  B(10,30)
				/ \
			   /   \
			  /     \
			 /   P   \      P'
			/         \
	 A(0,0) ----------- C(20,0) 

Input: A = (0, 0), B = (10, 30), C = (20, 0), P(30, 15)
Output: Outside
Explanation:
			  B(10,30)
				/ \
			   /   \
			  /     \
			 /       \      P
			/         \
	 A(0,0) ----------- C(20,0) 
*/