/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:33:30 by egiubell          #+#    #+#             */
/*   Updated: 2024/10/24 17:49:11 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	him("Proprio lui", 30);
	PresidentialPardonForm who("damn");
	ShruberryCreationForm plant("tree");
	RobotomyRequestForm brain("idk man, non mi sento tanto bene.");

	him.signForm(who);
	him.signForm(brain);
	him.signForm(plant);
	him.executeForm(who);
	him.executeForm(brain);
	him.executeForm(plant);

return (0);
}
