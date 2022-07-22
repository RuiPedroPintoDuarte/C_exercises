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
	
	if (num==num2==num3 )
	
	{
		printf ("Pode formar um triangulo equilatero");
	}
	
	
	else if (num != num2 && num != num3 && num2 != num3 )
	{
	printf ("Pode ser um triangulo escaleno ");
    } 
    else
	{
		printf ("Pode formar um triangulo isosceles ");
	}
}
