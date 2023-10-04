#include <stdio.h>

//Programa años bisiestos

int main()
{
	int n;
	
	printf ("Dame un año y te dire si es bisiesto o no\n");
	scanf ("%d", &n);
	
	if(((n % 4 == 0)&& (n % 100 != 0)) || (n % 400 == 0))
	{
		printf ("El año que introdujiste es bisiesto:)\n");
	}
	else
	{
		printf("El año que introdujiste NO es bisiesto:(\n\n");
	}
	
	printf ("Eso es todo lo que puedo hacer por ti");
	
	return 0;
}
