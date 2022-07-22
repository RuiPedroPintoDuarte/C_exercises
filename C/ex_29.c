#include <stdio.h>

void main(void)
{
 
int i ;
int num ;
int big ;


for(i=0;i<5;i++)
{
	printf("Insira um numero:\n");
	scanf("%d",&num);
	
	if (num>big)
    {
	big = num ;
    }
	
}
printf("O maior numero e : %d \n", big);

system("pause");
}
