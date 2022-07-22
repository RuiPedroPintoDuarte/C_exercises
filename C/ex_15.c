#include <stdio.h>

int main ()
{
	int num;
	
	printf ("Insira um numero : \n");
	scanf ("%i", &num);
	
	if (num % 2 == 0){
        printf ("O numero %i e par ",num);
    }else {
        printf("O numero %i e impar ",num);
    }
	
}

