/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:49:27 by egiubell          #+#    #+#             */
/*   Updated: 2024/10/24 17:32:17 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShruberryCreationForm.hpp"

ShruberryCreationForm::ShruberryCreationForm(const std::string& target) : AForm("ShruberryForm", 145, 137), target(target)
{
	std::cout << "Shruberry created" << std::endl;
}

ShruberryCreationForm::~ShruberryCreationForm()
{
	std::cout << "Shruberry destroyed" << std::endl;
}

std::string ShruberryCreationForm::getTarget(void) const
{
	return this->target;
}

ShruberryCreationForm::ShruberryCreationForm(const ShruberryCreationForm &copy) : AForm(copy)  , target(copy.getTarget())
{
	std::cout<<"Shruberry copy called"<<std::endl;
}

ShruberryCreationForm& ShruberryCreationForm::operator=(const ShruberryCreationForm &copy)
{
	this->target = copy.getTarget();
	return *this;
}

void ShruberryCreationForm::execute(const Bureaucrat &executor) const
{
	std::string name;
	const char* file;
	name = this->getTarget() + "_shruberry";
	file = name.c_str();
	std::ofstream file(file);

	file <<"          .     .  .      +     .      .          .         "<<std::endl;
	file <<"     .       .      .     #       .           .             "<<std::endl;
	file <<"        .      .         ###            .      .      .     "<<std::endl;
	file <<"      .      .   \"#:. .:##\"##:. .:#\"  .      .              "<<std::endl;
	file <<"       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       ."<<std::endl;
	file <<"  .             \"#########\"#########\"        .        .     "<<std::endl;
	file <<"        .    \"#:.  \"####\"###\"####\"  .:#\"   .       .        "<<std::endl;
	file <<"     .     .  \"#######\"\"##\"##\"\"#######\"                  .  "<<std::endl;
	file <<"                .\"##\"#####\"#####\"##\"           .      .     "<<std::endl;
	file <<"    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     .         "<<std::endl;
	file <<"    .    .     \"#####\"\"#######\"\"#####\"    .      .          "<<std::endl;
	file <<"            .     \"      000      \"    .     .              "<<std::endl;
	file <<"       .         .   .   000     .        .       .          "<<std::endl;
	file <<".. .. ..................O000O........................ ......"<<std::endl;
	file.close();

}
