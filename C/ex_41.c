#include <stdio.h>

int main ()
{
	int num, max ;
	
	do 
	{
		printf ("Insira um numero:\n");
		scanf ("%i", &num);
		
		if (num > max)
	    {
		max=num;
	    }

	}
	
	while (num != -1);
	

	printf ("O maximo da sequencia e: %i \n",max);
}
