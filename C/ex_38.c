#include <stdio.h>

int main ()
{
	 
	float prec ,media,soma,max,min,i;
	printf ("Introduza o primeira precipitacao: \n ");
    scanf ("%f", &prec);
    min = prec;
	
	for (i=0; i<3; i++)
	{
		printf ("Insira os valores da precipitacao : \n ");
		scanf("%f",&prec);
	
        soma= soma+prec ; 
	    media = soma / 3 ;
	    
        }
        	    	
	if (prec > max)
	{
		prec=max;
	    scanf("%f",&max);
	}
	else if (prec<min)
	{
		min = prec;
		scanf("%f",&min);
	}
	else 
	{
		printf("Erro");
	}
	   
	 printf ("A media da percipitacao e: %.2f \n", media);
	 printf ("A maxima da percipitacao e: %.2f \n", max);
	 printf ("A minima da percipitacao e: %.2f \n", min);
}
