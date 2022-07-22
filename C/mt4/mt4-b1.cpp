#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void juntar(char *t);
int separar(char *t,char p[30][20]);  

int main()
{
	char texto[]="Estudo em Vila Real.\nUTAD a minha universidade.\nEngenharia Informatica o meu curso.";
	char palavras[30][20];	// Array de 30 strings de 20 carateres cada
	int i,n;
	
	printf("\nTexto original:\n%s\n",texto);
	
	juntar(texto);
	printf("\nTexto sem paragrafos:\n%s\n",texto);
	
	n=separar(texto,palavras);
	printf("\nO texto tem %d carateres e %d palavras.\n",strlen(texto),n);
	
	for(i=0;i<n;i++)
		printf("\n%s",palavras[i]);
	
	return(0);
}

void juntar(char *t)
{
	int i;
	
	for(i=0;i<strlen(t);i++)
		if(t[i]=='\n')
			t[i]=' ';
}

int separar(char *t,char p[30][20])
{
	int i, j=0, k=0, pal=1;
	
	for(i=0;i<strlen(t);i++)
	{
		if(t[i]!=' ')
		{
			p[j][k]=t[i];
			k++;
		}
		else
		{
			p[j][k]='\0';
			j++;
			k=0;
			pal++;
		}
	}
	return(pal);	// tambem podia retornar j+1, em vez de pal
}
