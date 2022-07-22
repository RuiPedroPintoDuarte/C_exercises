#include <stdio.h> // biblioteca de entradas e saidas 

int main()
{
	// inicializacao das variaveis (neste caso vai do char ate ao float )
 char nome [20];
 int horas, d ;
 float inns, irs,sb,sl;
 
 printf (" Insira o seu nome:\n ");  //apresenta na consola a mensagem entre parenteses
 scanf("%s",&nome);                  //permite a leitura de dados a partir de uma fonte de caracteres de acordo com um formato pré determinado
 
  printf (" Insira o seu numero de horas:\n ");
 scanf("%i",&horas);
 
  printf (" Insira o seu numero de dependentes:\n ");
 scanf("%i",&d);
 
 sb= horas*12 + d*40 ;
 inns= sb*0.085;
 irs= sb *0.05;
 sl=sb-inns-irs;
 
 printf("O trabalhador %s teve o salario bruto de %.2f mas descontou %.2f para o inns e %.2f para o irs ficando com um salario liquido de %.2f ",nome,sb,inns,irs,sl);
 

	return (0);
}
