// Construa um programa em linguagem C, também utilizando struct, que armazene em um vetor
// o CODIGO, NOME e PREÇO de 12 peças. Posteriormente, classifique utilizando o método
// bubble sort e apresente o novo resultado no final.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define total 3

struct produto
{
    char  nome[60];
    float preco;
    int codigo;
};

struct produto pro[5];

int main()
{
    system("cls");
    printf("================> Hello World! <================\n");

    int i;
    for (i = 0; i < total; i++)
    {
        printf("\n================> PRODUTO %.2d <================\n", i + 1);
        printf("Informe o codigo: ");
        printf("\n============>Indice %d   RESPOSTA:", i);
        scanf("%d", &pro[i].codigo);
        fflush(stdin);

        printf("Informe o nome: ");
        printf("\n============>Indice %d   RESPOSTA:", i);
        gets(pro[i].nome);

        printf("Informe o preco R$: ");
        printf("\n============>Indice %d   RESPOSTA:", i);
        scanf("%f", &pro[i].preco);
        fflush(stdin);
    }

    printf("\n\n:::::::::::: CLASSIFICADO POR CODIGO ::::::::::::");
    int x, y;
    for (x = 0; x < total - 1; x++)
    {
        for (y = 0; y < total-x-1; y++)
        {
            if (pro[y].codigo > pro[y+1].codigo)
            {
                char tmp[36];
                float tmpP;
                int tmpI;
                tmpI = pro[y].codigo;
                pro[y].codigo = pro[y + 1].codigo;
                pro[y + 1].codigo = tmpI;
                strcpy(tmp, pro[y].nome);
                strcpy(pro[y].nome, pro[y + 1].nome);
                strcpy(pro[y + 1].nome, tmp);
                tmpP = pro[y].preco;
                pro[y].preco = pro[y + 1].preco;
                pro[y + 1].preco = tmpP;
                //conferir o troca troca
            }
        }
    }
    printf("\n================> PRODUTOS <================");
    for (x = 0; x < total; x++)
    {
        printf("\nCODIGO: %.6d | NOME: %s | PRECO R$: %.2f", pro[x].codigo, pro[x].nome, pro[x].preco);
    }

    printf("\n\n");
    system("pause");
    return 0;
}