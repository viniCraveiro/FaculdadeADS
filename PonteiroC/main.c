#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"

int fatorial(int num)
{
    No *remover, *pilha = NULL;

    while (num > 1)
    {
        pilha = empilhar(pilha, num);
        num--;
    }

    imprimir(pilha);

    while (pilha)
    {
        remover = desempilhar(&pilha);
        num = num * remover->valor;
        free(remover);
    }
    return num;
}

int main(void)

{
    int n;
    printf("\nDigite um valor maior que zero: ");
    scanf("%d", &n);

    printf("Fatoria de %d: %d\n", n, fatorial(n));
    return 0;
}
