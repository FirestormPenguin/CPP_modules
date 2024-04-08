/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:27:58 by egiubell          #+#    #+#             */
/*   Updated: 2024/04/08 17:21:16 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void )
{
	ScavTrap ash( "Ash" );

	ash.attack( "the air" );
	ash.takeDamage( 10 );
	ash.beRepaired( 10 );
	ash.guardGate();

	return EXIT_SUCCESS;
}
