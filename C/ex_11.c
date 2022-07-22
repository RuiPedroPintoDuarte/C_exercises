#include <stdio.h>

int main ()
{
	int horas, minutos ;
	char tempo ;
	
	
	printf ("Insira que horas sao : \n");
	scanf ("%i", &horas);
	
	printf ("Insira que minutos sao : \n");
	scanf ("%i", &minutos);
	
	if ( horas >=13 && horas <24)
	{
		horas = horas-12 ;
		printf("%ih%i PM", horas , minutos);
	
	}
	else if (horas=12)
	{
		horas = 12 ;
		printf("%ih%i PM", horas , minutos);
		
	}
	
	else if (horas=24)
	{
		horas = 12 ;
		printf("%ih%i AM", horas , minutos);
	
	}
	else 
	{
		horas = horas ;
		printf("%ih%i AM", horas , minutos);
	}
	
	
	
}
