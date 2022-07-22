#include <stdio.h>


void positivos(int *Valores)
{
int i, numero;
for( i = 0; i < 10; i++)
{
    printf("Valores:");
    scanf("%d", &numero);
    if (numero % 2 != 0)
    {
      i--;
      puts("Tem de ser numero par!");
    }
    else
      Valores[i] = numero;
    puts("\n");
}
}

int main()
{
int valores[10], i;

positivos(valores);

printf("Valores maior que 10:");
for(i = 0; i < 10; i++)
{
    if(valores[i] > 10)
        printf("%d\t",valores[i]);
}
return 0;
} 
