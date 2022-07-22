#include<stdio.h>  \\ biblioteca de entradas e saidas 

int main() {
 
  // definicao das variaveis 
 float base, altura , area ;  
 int i ;

 for (i = 0 ; i <2 ; i++) 
    { 
    
   printf ("Insira a base : \n");
   scanf("%f",&base);
   
   printf ("Insira a altura : \n");
   scanf("%f",&altura);
   
   
   area = (base*altura) / 2 ;
   
   printf (" A area dos triangulos e %.2f: \n", area);
    
    }
 
   
 return 0;
}
