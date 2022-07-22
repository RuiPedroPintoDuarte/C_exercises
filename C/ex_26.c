#include <stdio.h>

int main ()
{
	char letra;
	
	do 
	{
        printf("Insira a letra 'a' para parar o loop : \n ");
        letra = getchar(); 
        getchar();
	}
	
	while (letra != 'a');
	
	return 0 ; 
}
