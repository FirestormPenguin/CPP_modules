/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainDoc.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 00:20:04 by egiubell          #+#    #+#             */
/*   Updated: 2024/03/26 16:11:57 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieDoc.hpp"

/*NON CONSIGLIATO, permette di non inserire std:: prima di coout,
cin, string etc.., puo' essere utile ma puo' anche creare conflitti
e codice poco leggibile, meglio evitare.
Nel caso va scritto all'inizio sotto gli include*/
//using namespace std;

int main(void)
{
	/*Dichiarazione e inizializzazione variabilil*/
	size_t N = 4;
	/*"std::string" perche string e' una tipologia di
	variabile contentuta in una classe standard
	richiamabile tramite "std::" si puo' evitare tramite
	"using namespace std", vedi sopra*/
	std::string	name = "jack";

	/*Chiamata della funzione zombieHorde*/
	Zombie *zombiz = zombieHorde(N, name);

	/*Ciclo for per chiamare la funzione announce per ongi
	singola instanza della classe Zombie*/
	for (size_t i = 0; i < N; i++)
	{
		zombiz[i].announce();
	}

	delete [] zombiz;
	return 0;
}
