#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//1) Solicitar uma palavra e apresentar a quantidade de caracteres na mesma;
int main() {
    char palavra[50];
    int quantidade;

    printf("Informe uma palavra: ");
    gets(palavra);

    quantidade=strlen(palavra);

    printf("Quantidade de caracteres na palavra (%s): %d\n\n",palavra,quantidade);


    system("pause");
    return (0);
}
	
