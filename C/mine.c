#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Nome {
    char PNome[50];
    char SNome[50];
}N;
char* nomeSobre(N nome);

int main()
{
    FILE fd;
    N Nomes[20];
    char NomesFinais[20];
    int i;

    for (i = 0; i < 20; i++)
    {
        printf("Nome:");
        scanf("%s", Nomes[i].PNome);
        printf("\nSobrenome:");
        scanf("%s", Nomes[i].SNome);
        NomesFinais[i] = nomeSobre(Nomes[i]);
    }
    for (i = 0; i < 20; i++)
    {
        printf("%s", NomesFinais[i]);
    }
}

char* nomeSobre(N nome)
{
    char Name[52];
    int i = 0;
    strcpy(Name, nome.SNome);
    while (Name[i] != '\0');
    {
        if (i == 0)
            Name[i] += 0x20;
        else
            Name[i] -= 0x20;
        i++;
    }
    Name[i] = nome.PNome[0];
    Name[i + 1] = '\0';

}
