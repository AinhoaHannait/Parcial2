#include <stdio.h>
#include <time.h>

//programa que hace operaciones random con numeros random

int main ()
{
	int randomR;
	float random1, random2, r = 0;
	
	srand (time(NULL));
	
	/*do 
	{
		randomR=rand()% (5 +1 -1) +1;
		printf ("%d\n", randomR);
	} */

	while (randomR!=5)
	{
		randomR = rand() % (5 +1 -1) +1;
		printf ("%d\n", randomR);
		switch (randomR)
		{
			case 1: 
			random1 = rand ();
			random2 = rand ();
			r = random1 + random2;
			printf ("%f + %f = %f\n", random1, random2, r );
			r=0;
			break;
			
			case 2: 
			random1 = rand ();
			random2 = rand ();
			r = random1 - random2;
			printf ("%f - %f = %f\n", random1, random2, r );
			r=0;
			break;
			
			case 3: 
			random1 = rand ();
			random2 = rand ();
			r = random1 * random2;
			printf ("%f * %f = %f\n", random1, random2, r );
			r=0;
			break;
			
			case 4: 
			random1 = rand ();
			random2 = rand ();
			r = random1 / random2;
			printf ("%f / %f = %f\n", random1, random2, r );
			r=0;
			break;
			
		}
	}
	
	if (randomR==5)
	{
		printf("El programa se ha terminado. \n\n"
		"Esto es todo lo que puedo hacer por ti:)");
	}
	
	return 0;
}
