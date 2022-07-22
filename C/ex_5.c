#include <stdio.h>

int main()
{
	float base, altura, area ;
	
	printf (" Insira a base: \n");
	scanf("%f", &base);
   
    printf (" Insira a altura: \n");
    scanf("%f", &altura);
	
	area = (base * altura ) / 2 ; 
	
	printf ("A area e : %.2f \n ", area );
	
	return (0);
}
