#include <stdio.h>
#include <stdlib.h>

//3)Solicitar o nome e idade de 3 pessoas (utilize a estrutura PARA)
int main() {
    char nome[50];
    int idade,i=0;
    for (i = 0; i < 3; i++)
    {
        printf("Informe seu nome: ");
        gets(nome);
        printf("\nInforme sua idade: ");
        scanf("%d",&idade);
        fflush(stdin);
    }
    
    

    system("pause");
    return (0);
}
	
