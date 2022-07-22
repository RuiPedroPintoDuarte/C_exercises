#include<stdio.h>
 
int main()
{

 float Count = 0,num,soma,media;
 
 do 
 {  
 	printf("Insira um numero:\n ");
 	scanf("%f",&num );
 	soma=soma+num;
 	Count++;
 }
 while (num != -1);
 
 Count=Count-1;
 media=(soma+1)/Count;

 printf("A media e %.2f e foram usados %.0f numeros ", media,Count);
 
 return 0;
}
