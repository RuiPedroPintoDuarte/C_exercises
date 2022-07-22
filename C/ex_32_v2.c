#include <stdio.h>

void main(void)
{
 
int i ;
float soma = 0 ;
float nota ;
float media ;

for (i=1;i<4;i++){

   printf("Insira um i= %d numero:\n ", i);
   scanf("%f", &nota);
   
   soma= soma+nota ; // estudar como fazer somas em c por exemplo(numero pares numeros impars )
	media = soma / i ;
	if (media>20)
	{
		//printf("O sua media original e : %.2f \n", media);
		
		media = 20 ;
		
	printf("O sua media e : %.2f \n", media);

	}
	else {
		printf ("A sua media original e: %.2f \n", media );
	}
}
system("pause");
}
