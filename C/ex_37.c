#include <stdio.h>

int main ()
{
	int exame ;
	int i; 
	float nota,media,soma;
	
	for (i=1; i<6; i++)
	{
		printf ("Foi ao exame ?  1 para sim 0 para nao : \n");
		scanf("%i", &exame);
		
	    if(exame==1)
		{
		
		printf ("Insira a sua nota: \n ");
		scanf("%f",&nota);
	
        soma= soma+nota ; 
	    media = soma / i ;
	    
        }
	else 
	{
		printf("A sua nota nao sera inserida na pauta porque faltou ao exame \n ");
	}
	
    }
	 printf ("A media da turma e: %.2f", media);
}
