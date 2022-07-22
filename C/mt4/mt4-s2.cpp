/*
Crie um programa principal que permita armazenar numa string uma data de nascimento lida do teclado. 
Implemente a função "Validar" a qual deverá verificar se a data de nascimento foi introduzida com o formato X\X\X 
em que X representa os campos da data de nascimento. O programa principal deverá notificar o utilizador sobre a 
validade da data de nascimento introduzida.
*/

#include <stdio.h>
#include <string.h>

int Validar(char *data)
{
    int encontrados = 0;
    int i;
    
    for (i=0; i<strlen(data); i++)
    {
        if (data[i] == '/')
            encontrados++;
    }
    
    if (encontrados == 2)
        return 1;
    else
        return 0;
}

int main()
{
    char data[10];
    
    printf("Data de nascimento: ");
    scanf("%s", data);
    
    if (Validar(data) == 1)
        printf("Data de nascimento valida!");
    else
        printf("Data de nascimento invalida!");
    
    return 0;
}
