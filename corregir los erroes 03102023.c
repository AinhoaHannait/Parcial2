#include <stdio.h>

//corregir los errores de un programa

int main ()
{
	int n1, n2, resultado, suma;
	
	printf("Introduzca el primer numero a sumar:\n");
	scanf ("%d", &n1);
	printf ("Introduzca el segundo numero a sumar:\n");
	scanf ("%d", &n2);
	printf ("Cual es el resultado de la suma?\n");
	scanf ("%d", &suma);
	resultado = n1 + n2;
	if (suma== resultado)
	{
		printf ("Excelente, tu resultado es correcta:)");
	}
	else 
	{
		printf ("El resultado es incorrecto:(\n");
		printf ("El resultado correcto es %d, necesitas practicar tus sumas:)", resultado);
	}
	
	return 0;
}
