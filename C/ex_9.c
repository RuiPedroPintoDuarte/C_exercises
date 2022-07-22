#include <stdio.h>
#include <stdlib.h>
int main()
{
float grade;

printf("Insert the grade: ");
scanf(" %f", &grade);

if (grade >= 9.5 && grade <16) { 
printf("The student was aproved!\n");
}
else if (grade >= 16 && grade  <=20)
{
	printf("Passou mas vai a prova oral\n");
	
	if(grade >= 16 && grade <18 ) {
		
		printf("A sua nota aumenta 2 valor \n");
	}
	
	else 
	{
		printf("a sua nota aumentou 1 \n");
	}
}

else if (grade >= 8.5 && grade <9.5)
{
	printf("Nao passou mas pode ir a prova oral\n ");
}

else {
printf("The student was not aproved!\n");
}

system("pause");
exit(0);
}

