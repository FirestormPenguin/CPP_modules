/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieDoc.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 23:41:46 by egiubell          #+#    #+#             */
/*   Updated: 2024/03/26 16:03:37 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Questo file si dovrebbe chimare Zombie.cpp
per correttezza organizzativa*/

/*Include del hpp che contiene la classe Zombie*/
#include "ZombieDoc.hpp"

/*Costruttore, viene invocata ogni qual volta on oggetto
della classe viene instanziato, ovvero una nuova copia
della classe viene creta, come un nodo in una lista.
In questo caso non fa nulla in quanto vuota, ma potrebbe
operare su variabili della classe o fare altre operzioni
utili*/
Zombie::Zombie(void)
{
}

/*Distruttore, invocata quando un oggeto/un instanza di Zombie
viene eliminata, in questo caso stampera' "name: destroyed"*/
Zombie::~Zombie()
{
	std::cout << this->name << ": destroyed!" << std::endl;
}

/*Funzione di Zombie di tipo string che ritorna il name, ce
e'di base una variabile privata, cosi facendo puo' essere
utilizzata al di fuori anche*/
std::string	Zombie::getName()
{
	return (name);
}

/*Funzione announce, semplicemente stampa un output*/
void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

/*Funzione setName, imposta la variabile privata name*/
void	Zombie::setName(std::string name)
{
	this->name = name;
}

/*Funzione zombieHorde, tramite for crea una nuova instanza
della classe per il numero di N, tutti con lo stesso nome*/
Zombie	*zombieHorde(int N, std::string name)
{
	/*crea con new un array/vettore (ancora da capire) di
	grandezza N (Zombie[N])*/
	Zombie *tmpZombie = new Zombie[N];
	
	/*Ciclo for che imposta il name ad ogni zombie*/
	for (int i = 0; i < N; i++)
	{
		tmpZombie[i].setName(name);
	}
	return tmpZombie;
}
