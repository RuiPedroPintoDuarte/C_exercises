#include <stdio.h>
#include <stdLib.h>
#include <string.h>

typedef struct Nome {
    char PNome[20];
    char SNome[20];
}N;
char* nomeSobre(N nome, char Name[20]);

int main()
{
    FILE fd;
    N Nomes[20];
    char NomesFinais[20][20];
    int i;

    for (i = 0; i < 20; i++)
    {
        printf("Nome:");
        scanf("%s", Nomes[i].PNome);
        printf("\nSobrenome:");
        scanf("%s", Nomes[i].SNome);
        nomeSobre(Nomes[i], NomesFinais[i]);
    }
    for (i = 0; i < 20; i++)
    {
        printf("%s", NomesFinais[i]);
    }
}

char* nomeSobre(N nome, char Name[20])
{
    int i = 0;
    strcpy(Name, nome.SNome);
    do
    {
        if (i == 0)
            Name[i] += 0x20;
        else
            Name[i] -= 0x20;
        i++;
    } while (Name[i] != '\0');
    Name[i] = nome.PNome[0] + 0x20;
    Name[i + 1] = '\0';
}
