#include <stdio.h>

// programa que inntercambia los valores

int main ()
{
	int v1, v2, v3, r;
	
	printf("Ingresaras 3 valores y yo los cambiare de posicion\n");
	printf("Ingresa el primer valor:\n");
	scanf ("%d", &v1);
	printf("Ingresa el segundo valor:\n");
	scanf ("%d", &v2);
	printf("Ingresa el tercer valor:\n");
	scanf ("%d", &v3);
	printf("\nEl orden de los valores introducidos es\t %d\t %d\t %d\t", v1, v2, v3);
	
	r = v1;
	v1 = v3;
	v3 = v2;
	v2 = r;
	
	printf("\n\nEl nuevo orden de los valores introducidos es\t %d\t %d\t %d\t", v1, v2, v3 );
	printf("\nEsto es todo lo que puedo hacer por ti:)");
		
	
	
	
	return 0;
}
