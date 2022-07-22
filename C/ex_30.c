#include <stdio.h>

void main(void)
{
 
int i ;
int num ;
int menor ;

printf ("Introduza o primeiro numero: ");
    scanf ("%d", &num);
    menor = num;

for(i=1;i<5;i++)
{   
    if(num>=0 && num%2 == 0 ){
	printf("Insira um numero:\n");
	scanf("%d",&num);
     }
     else {
    printf("Insira um numero INTEIRO E POSITIVO:\n");
	scanf("%d",&num);
	 }
     
	if (num < menor)
    {
	menor = num ;
    }
	
}
printf("O menor numero e : %d \n", menor);

system("pause");
}
