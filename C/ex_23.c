#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 int main()
 {
 	float d,e;
 	char unidade;
 	printf("Que conversao vai usar:\n");
 	printf("Euro-dolar: d\n");
 	printf("Dolar-euro: e\n");
 	 scanf("%c", &unidade );
 	
 
 	
 	switch(unidade){
 	 	
	case'd':
 	printf("Qual valor deseja converter:");
 	scanf("%f",&e);
 	d=e*1.09;
 	printf("O valor em dolares e:\n");
 	printf("%.2f",d);
 	break;
 	 		
 	case'e':
 	printf("Qual valor deseja converter:");
 	scanf("%f",&d);
 	e=d*0.91;
 	printf("O valor em euros e:\n");
 	printf("%.2f",e);
 	
 	break;
 	default:
 		printf("O valor que introduziu nao esta correto");
 	}
	  return 0;
 }
