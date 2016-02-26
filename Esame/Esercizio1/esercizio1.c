#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Creare una funzione che accetti in input un array di interi
// e restituisca la media in double degli elementi contenuti.
// Stampare a console la media di un array che contenga i primi
// 100 numeri interi divisibili per 3 (ovvero: 3, 6, 9, …).

double media(int a[], int lung)
{
	double result = 0;
	for (int i = 0; i < lung; ++i)
	{
		result += a[i];
	}
	return result/lung;
}

int main()
{
	int numel = 100;
	int a[numel];
	for (int i = 0; i < numel; ++i)
	{
		a[i] = (i + 1) * 3;
	}

	double result = media(a, sizeof(a)/sizeof(int));
	printf("La media dei primi %d numeri divisibili per 3 è: %f\n", numel, result);

	return EXIT_SUCCESS;
}