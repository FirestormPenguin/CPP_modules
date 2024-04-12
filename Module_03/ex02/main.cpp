/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:27:58 by egiubell          #+#    #+#             */
/*   Updated: 2024/04/12 12:25:50 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main( void )
{
	ClapTrap ct1("Aeryilma");
	FragTrap ct2("Glavenus");

	ct2.beRepaired(5);
	ct1.attack("Glavenus");
	ct2.takeDamage(10);
	ct2.highFive();

	return EXIT_SUCCESS;
}
