#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 int main()
 {
 	
 	float a,b;
 	char operador;
 	
 	printf("Escolha o operador:\n");
 	scanf("%c",&operador);
 	
 	 printf("Introduza o valor de a:\n");
 	 scanf("%f",&a);
 	 
 	 printf("Introduza o valor de b:\n");
 	 scanf("%f",&b);
 	 
 	 switch(operador){
	  
 	 
 	 case '+':
 	 printf("%f + %f= %f" ,a,b,a+b);
 	 break;
 	 
 	 case '-':
 	 printf("%f - %f= %f" ,a,b,a-b);
 	 break;
 	 
 	 case '*':
 	 printf("%f * %f= %f" ,a,b,a*b);
 	 break;
 	 
 	 case '/':
 	 	if(b==0) printf("O resultado nao e possivel");
 	 printf("%f / %f= %f" ,a,b,a/b);
 	 break;
 }
 	 return 0 ;
 	 
 	 }
