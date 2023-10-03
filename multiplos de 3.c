#include <stdio.h>

// Te dire si los numeros del 0 al 100 son multiplos de 3

int main ()
{
	int i, residuo=0;
	
	for (i=0; i<101; i++)
	{
		printf (" El numero %d ", i);
		residuo= i % 3;
		if (residuo ==0)
		{
			printf ("es multiplo de 3\n");
		}
		else 
		{
			printf ("no es multiplo de 3\n");
		}
		
		residuo = 0;
	}
	
	printf ("Eso es todo lo que puedo hacer por ti, espero puedas aprenderte la tabla del 3:)");
	
	
	return 0;
}
