#include <stdio.h>

// Programa que hace la mitad de una pirámide de números

int main ()
{
	int n, i, j;
	
	printf("Ingresa el numero de renglones de la piramide\n");
	scanf ("%d", &n);
	printf ("\n");
	
	for (i=1; i<=n; i++)
	{
		for (j=1; j<=i; j++)
		{
			printf ("%d ", j);
		}
		printf ("\n");
	}
	
	printf("\n\n");
	printf("Espero te haya gustado el resultado:)");
	
	return 0;
}
