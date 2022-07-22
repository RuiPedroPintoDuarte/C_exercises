#include <stdio.h>

int main ()
{
	int num, num2;
	
	printf ("Insira um numero : \n");
	scanf ("%i", &num);
	printf ("Insira um numero : \n");
	scanf ("%i", &num2);
	
	if (num > num2 ){
        printf ("%i e menor que %i ",num2, num );
    }else {
        printf("%i e menor que %i ",num,num2 );
    }
	
}
