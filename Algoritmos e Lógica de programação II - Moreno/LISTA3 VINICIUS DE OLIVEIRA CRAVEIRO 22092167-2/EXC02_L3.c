#include <stdio.h>
#include <stdlib.h>

//2) Solicitar o nome e idade de 3 pessoas (utilize a estrutura FAÇA ENQUANTO)
int main() {
    char nome[50];
    int idade,i=0;
    while (i<3)
    {
       printf("\nInforme seu nome:");
       gets(nome);
       printf("\nInforme sua idade:");
       scanf("%d",&idade);
       fflush(stdin); 
       i++;
    }
    

    system("pause");
    return (0);
}
	
