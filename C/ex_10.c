#include <stdio.h> 
#include <stdlib.h> 

int main()
{
	float nota,nota1 ; 
	
	printf("Insira a nota da primeira frequencia: ");
	scanf("%f", &nota);
	
	printf("Insira a nota da segunda frequencia: ");
	scanf("%f", &nota1);
	
	float media = (nota*0.5+nota1*0.5) ;
	
	
	if (media > 9.5)
	
	{
		printf("Parabens,Aprovado, a sua media e %f : ", media );
	}
	
	else 
	{
		printf("Reprovou, a sua media e: %f ", media);
	}
	
	system("pause"); 
    exit(0);
}
