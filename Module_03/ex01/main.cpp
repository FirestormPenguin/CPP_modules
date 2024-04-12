/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:27:58 by egiubell          #+#    #+#             */
/*   Updated: 2024/04/12 12:10:40 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void )
{
	ClapTrap ct1("aeryilma");
	ScavTrap ct2("Glavenus");

	ct2.guardGate();
	ct2.beRepaired(5);
	ct1.attack("Glavenus");
	ct2.takeDamage(15);
	ct2.guardGate();

	return EXIT_SUCCESS;
}
