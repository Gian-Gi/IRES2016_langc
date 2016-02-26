#include <stdio.h>
#include <stdlib.h>

// Implementare una funzione, denominata zip, che dato due array
// di interi a e b della stessa lunghezza crei un terzo array che
// contenga i valori dei precedenti array intervallati tra di loro
// (partendo dal primo elemento dell’array a).
// Esempio (in pseudocodice):
//		```sh
//		a = [1,7,9,4]
//		b = [4,5,6,9]
//		Risultato array:
//		risultato: [1,4,7,5,9,6,4,9]
//		```
// Testare la funzione creando un array contenente i primi 100
// numeri interi pari [0,2,4,6,8,...] e un array contenente i
// primi 100 numeri interi dispari [1,3,5,7,9,11,13,...].
// Stampare a console l’array risultate dalla chiamata alla funzione zip.

void myzipp(int p[], int d[], int* z, int lung)
{
	int idz = 0;
	for (int i = 0; i < lung; ++i)
	{
		z[idz++] = p[i];
		z[idz++] = d[i];
	}
}

int main()
{
	int numel = 100;
	int arpari[numel];
	int ardisp[numel];
	int arzipp[numel*2];

	for (int i = 0; i < numel; ++i)
	{
		arpari[i] = i * 2;
		ardisp[i] = arpari[i] + 1;
	}

	myzipp(arpari, ardisp, arzipp, sizeof(arpari)/sizeof(int));

	for (int i = 0; i < numel; ++i)
	{
		printf("arzipp[%d] = %d\n", i, arzipp[i]);
	}
	
	return EXIT_SUCCESS;
}