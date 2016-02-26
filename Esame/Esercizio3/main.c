#include <stdio.h>
#include <stdlib.h>
#include "moltiplicazione.h"

// Creare due funzioni, somma e moltiplicazione. La prima accetta due interi e restituisce
// la loro somma. La seconda accetta due interi e restituisce il loro prodotto, senza usare
// l’operatore *, ma basandosi  sulla funzione somma precedentemente creata. Implementare
// la prima funzione (somma) su un file denominato: somma.c e dichiararla su un file somma.h;
// implementare la seconda funzione (moltiplicazione) su un file denominato moltiplicazione.c
// e dichiararla su un file moltiplicazione.h. Creare infine un file main.c contenente la
// funzione main che stampa a console il risultato del prodotto di 3 per 5 e del prodotto
// di 0 e 15 utilizzando la funzione moltiplicazione.

int main()
{
	int val_a1 = 3;
	int val_b1 = 5;
	int val_a2 = 0;
	int val_b2 = 15;
	int result;

	result = moltiplicazione(val_a1, val_b1);
	printf("Il risultato della moltiplicazione di %d e di %d è: %d\n", val_a1, val_b1, result);

	result = moltiplicazione(val_a2, val_b2);
	printf("Il risultato della moltiplicazione di %d e di %d è: %d\n", val_a2, val_b2, result);

	return EXIT_SUCCESS;
}