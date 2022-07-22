#include <stdio.h>

void main(void)
{
 
int i ;
int num ;
int menor ;
int maior ;

printf ("Introduza o primeiro numero ");
    scanf ("%d", &num);
    menor = num;

do{
printf ("Insira um numero:\n");
scanf("%d", &num);
	   if (num < menor && num != 0)
       {
	    menor = num ;
       }
       if (num > maior)
       {
	    maior = num ;
       }
	} 
	while (num!=0);
	
printf("O maior numero e : %d \n", maior);
printf("O menor numero e : %d \n", menor);


system("pause");
}
