#include <stdio.h>

int main ()
{
	int num, num2,num3;
	
	printf ("Insira um numero : \n");
	scanf ("%i", &num);
	printf ("Insira um numero : \n");
	scanf ("%i", &num2);
	printf ("Insira um numero : \n");
	scanf ("%i", &num3);
	
	
	if (num > num2 && num >num3)
	{
        printf ("O maior e %i ", num);
    }
	else if (num2 > num && num2 > num3) 
	{
        printf("O maior e %i", num2 );
    }
    else 
	{
		printf("O maior e %i", num3);
	}
	
}
