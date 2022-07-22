#include <stdio.h>

int main ()
{
	
	float polegadas, cent;
	
	printf ("Insira um valor em polegadas: \n");
	scanf("%f",&polegadas);
	
	cent = polegadas*2.56;
	printf ("O tamanho da polegada para centimetros e : %.2f", cent);
	return (0);
}
