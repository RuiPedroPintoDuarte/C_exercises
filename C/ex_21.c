    #include<stdio.h>
    #include<math.h>
    int main(void)
    {
       int a,b,c;
	
	printf ("Insira um numero : \n");
	scanf ("%i", &a);
	printf ("Insira um numero : \n");
	scanf ("%i", &b);
	printf ("Insira um numero : \n");
	scanf ("%i", &c);
	
	if (pow(a,2)*pow(b,2)==pow(c,2) || pow(b,2)*pow(c,2)==pow(a,2) || pow(a,2)*pow(c,2)==pow(b,2) )
	{
		printf("E triangulo retangulo");
	}
	else 
	{
		printf("Nao e triangulo retangulo");
	}
       return 0;
    }
