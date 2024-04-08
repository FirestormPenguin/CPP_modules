/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:27:58 by egiubell          #+#    #+#             */
/*   Updated: 2024/04/08 16:31:14 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main ()
{
	ClapTrap ash("Ash");
	ClapTrap jon("Jon");

	ash.attack("Jon");
	jon.takeDamage(ash.getAttackDamage());
	jon.beRepaired(0);


	return EXIT_SUCCESS;
}
