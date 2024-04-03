/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieDoc.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 15:01:39 by egiubell          #+#    #+#             */
/*   Updated: 2024/03/26 15:56:32 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Il file si dovrebbe chiamare Zombie.hpp*/
/*Tipico ifndef e define con endif alla fine del file*/
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

/*Vari include come in C, ma non serve scrivere .h o
.hpp non so perche ancora*/
#include <iostream>
#include <iomanip>
#include <limits>
#include <string>
#include <vector>

/*Dichiarazione classe, in questo caso che si chiama
Zombie, e' buona norma chiamare le classi con una
Maiuscola iniziale*/
class Zombie
{
	
	/*Da qui in poi vengono dichiarete le variabili e le funzioni private,
	ovver funzioni e variabili che possono essere utilizzate solo internamente
	alla classe tramite le sue funzioni, per portare una variabile privata fuori
	va fatta ritornare da una funzione pubblica*/
	private:
	
		/*Variabile privata di nome name e di tipo string*/
		std::string	name;
		/*Funzione privata, tipicamente scritta senza "_" e con
		maiuscole divisione quindi non generic_function ma
		genericFunction, in questo caso e' di tipo void e richiede
		un argomento void, ergo nulla*/
		void		genericFunction(void);
		
	/*Funzioni e variabili pubbliche utilizzabili e visibili
	sia dalla classe che esternamente ad essa, questa cosa devo
	ancora capirla bene*/
	public:
	
		/*Funzioni costruttore e distruttore della classe Zombie,
		si chiamano come la classe stessa e vengono richiamati
		quando viene instanziato un oggetto o eliminato, simile ad
		allocare un nuovo nodo in una lista*/
		Zombie();		//costrtuttore
		~Zombie();		//distruttore
		/*Variabile pubblica*/
		std::string	getName(void);
		/*Funzioni pubbliche di vario tipo*/
		void		announce(void);
		Zombie		*newZombie(std::string name);
		void		randomChump(std::string name);
		Zombie		*zombieHorde(int N, std::string name);
		void		setName(std::string name);
};


/*Dichiarazione di 3 funzioni della classe Zombie come globali,
questo permette di chiamare queste funzioni in maniera autonoma
e piu facile e allo stesso tempo di accedee alle variabili e
funzioni private della classe*/
Zombie	*newZombie(std::string name);
void	randomChump(std::string name);
Zombie	*zombieHorde(int N, std::string name);

#endif