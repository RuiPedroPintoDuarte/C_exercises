#include <stdio.h>

void main(void)
{
 
int i ;
float nota [5]= {100,13,14,15,16};
float media ;


   media = (nota[0]+nota[1]+nota[2]+nota[3]+nota[4]) / 5 ;
	
	if (media>20)
	{
		//printf("O sua media original e : %.2f \n", media);
		
		media = 20 ;
		
	printf("O sua media e : %.2f \n", media);

	}
	else {
		printf ("A sua media original e: %.2f \n", media );
	}

system("pause");
}
