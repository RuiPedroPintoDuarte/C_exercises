#include <stdio.h>

int main ()
{
	int nota ;
	
	printf ("Insira a sua nota : \n ");
	scanf ("%i", &nota);
	
	if (nota>= 0 && nota < 5 )
	{
		printf (" %i : pessimo ", nota);
	}
	else if (nota>= 5 && nota < 8 )
	{
		printf (" %i : mau ", nota);
	}
	
		else if (nota>= 8 && nota < 10 )
	{
		printf (" %i : insuficiente ", nota);
	}
	
		else if (nota>= 10 && nota < 12 )
	{
		printf (" %i : suficiente ", nota);
	}
	
		else if (nota>= 12 && nota < 16 )
	{
		printf (" %i : bom ", nota);
	}
	
		else if (nota>= 16 && nota < 18 )
	{
		printf (" %i : muito bom ", nota);
	}
	else 
	{
		printf (" %i : excelente",nota );
	}
}
