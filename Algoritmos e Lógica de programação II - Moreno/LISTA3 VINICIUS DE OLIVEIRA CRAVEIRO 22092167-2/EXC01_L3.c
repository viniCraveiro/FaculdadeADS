
// 1)  Solicitar o nome e idade de 3 pessoas (utilize a estrutura REPITA ATE) -->

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    char nome[50];
    int idade,i=0;
    do{
        printf("\nInforme seu nome: ");
        gets(nome);
        printf("\nInforme sua idade:");
        scanf("%d",&idade);
        fflush(stdin);
        i++;
    } while (i<3);
    system("pause");
    return 0;
}
