/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:27:58 by egiubell          #+#    #+#             */
/*   Updated: 2024/04/12 14:36:36 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#include "DiamondTrap.hpp"

int main( void )
{
	DiamondTrap ash("Ash");
	DiamondTrap ash2(ash);
	DiamondTrap ash3(".");

	ash.whoAmI();
	ash2.whoAmI();
	ash3 = ash;
	ash3.whoAmI();

	ash.attack("the air");
	ash.takeDamage( 10 );
	ash.beRepaired( 10 );

	return EXIT_SUCCESS;
}
