#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
	float a , b ;
	char validade ; 
	
	printf ("Insira um valor : \n");
	scanf("%f", &a);
	
	printf ("Insira um valor : \n");
	scanf("%f", &b);
	
	if (a==b)
	{
		printf("Sao iguais");
		printf (" O produto e : %f * %f= %f" ,a,b,a*b );
		
	}
	
	else if (a!=b && a > b) 
	{
		printf ("Sao diferentes");
		printf ("O maior é %f", a );
	}
	else if  ( a!=b && a < b )
	{
		printf ("O maior é %f ", b);
	}
	else 
	{ 
	printf ("Ocurreu um erro");
	}
	
	printf ("\n");
	printf (" Indique se os valores sao diferentes ou iguais : d ou i : ");
	scanf("%s", &validade);
	
	
	switch (validade)
	{
		case 'i':
			if(b==0) printf("O resultado nao e possivel");
 	 printf("%f / %f= %f" ,a,b,a/b);
 	 break;
 	 
 	 	case 'd':
			if(b==0) printf("O resultado nao e possivel");
 	 printf("%f / %f= %f" ,a,b,a/b);
 	 break;
 	 default:
 		printf("O valor que introduziu nao esta correto");
 	}
	
	
	return (0);
}
