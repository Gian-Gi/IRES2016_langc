#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Creare una struttura Studente caratterizzata da un cognome e dal voto dell'esame sostenuto.
// Implementare le funzioni setCognome, getCognome, setVoto e getVoto che ne impostano e
// restituiscano rispettivamente il cognome e il voto dell'esame dello studente.
// Nota: non porrere limiti alla lunghezza del cognome.
// Creare un array di 100000 Studenti così denominati:
//		```sh
//		Studente 1:
//			Cognome: “Cognome_1”
//			Voto: 1
//		Studente 2:
//			Cognome: “Cognome_2”
//			Voto: 2
//		…
//		Studente i:
//			Cognome: “Cognome_i”
//			Voto: i%10
//		…
//		Studente 100000:
//			Cognome: “Cognome_100000”
//			Voto: 0
//		```
// Il voto è il numero dello studente modulo 10 (studente i-esimo ha voto i%10). PS. la funzione
// sprintf(char* buf, “%d”, i) permette di trasformare un intero in una stringa (buf contiene la
// stringa rappresentante l’intero i. Calcolare la somma dei voti degli studenti.

typedef struct
{
	char* Cognome;
	char* Voto;
} Studente;

void Studente_setCognome(Studente* this, char* Cognome)
{
	int length = strlen(Cognome);
	this->Cognome = malloc(length + 1);
	strcpy(this->Cognome, Cognome);
}

void Studente_getCognome(Studente* this, char* Cognome)
{
	strcpy(Cognome, this->Cognome);
}

void Studente_setVoto(Studente* this, char* Voto)
{
	int length = strlen(Voto);
	this->Voto = malloc(length + 1);
	strcpy(this->Voto, Voto);
}

void Studente_getVoto(Studente* this, char* Voto)
{
	strcpy(Voto, this->Voto);
}

int main()
{
	int numel = 100000;
	Studente* myStudente = malloc(numel * sizeof(Studente));
	char strAp1[10];
	char strAp2[20];
	int sommaVoti = 0;
	for (int i = 0; i < numel; ++i)
	{
		sprintf(strAp1, "%d", i+1);
		strcpy(strAp2, "Studente_");
		strcat(strAp2, strAp1);
		Studente_setCognome(&myStudente[i], strAp2);
		sommaVoti += (i+1)%10;
		sprintf(strAp1, "%d", (i+1)%10);
		Studente_setVoto(&myStudente[i], strAp1);
	}

//	for (int i = 0; i < numel; ++i)
//	{
//		Studente_getCognome(&myStudente[i], strAp1);
//		Studente_getVoto(&myStudente[i], strAp2);
//		printf("%s  %s\n", strAp1, strAp2);
//	}

	printf("La somma dei voti è: %d\n", sommaVoti);

	return EXIT_SUCCESS;
}