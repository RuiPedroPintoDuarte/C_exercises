/*
Implemente um programa principal que escreva no ecrã as strings "Turma_PL_yyyy", com yyyy os anos entre 2005 e 2022.
Utilize uma função que receba, como parâmetro de entrada, um vetor de carateres, e o apresente no ecrã com todos os carateres em maiúsculas.
O programa principal deverá informar o utilizador do número total de strings escritas no ecrã.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void maiusculas(char *s);

int main()
{
	char str[]="Turma_PL_";   
	int i, num=0;
	
	maiusculas(str);		// "TURMA_PL_"
	
	for(i=2005;i<=2022;i++, num++)
		printf("\n%s%d",str,i);
		
	printf("\nForam criadas %d strings.",num);
	return(0);
}

void maiusculas(char *s)
{
	strupr(s);
}
