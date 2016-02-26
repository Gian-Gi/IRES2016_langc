#include "somma.h"

int moltiplicazione(int a, int b)
{
	if (a == 0 || b == 0)
	{
		return 0;
	}
	int result = 0;
	for (int i = 0; i < b; ++i)
	{
		result = somma(result, a);
	}
	return result;
}
