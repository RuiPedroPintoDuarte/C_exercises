#include <stdio.h>

int main()
{
 char nome [20];
 int pf,pi ;
 
 printf ("Insira o nome do carro: \n");
 scanf("%s", &nome);
 
 printf ("Insira o preco do carro: \n");
 scanf("%i", &pi);
 
pf = pi + pi*0.45 + pi*0.28;

 printf ("O nome do carro e %s e o seu preco final e %i \n", nome , pf);

	return (0);
}
