#include <stdio.h>
#include <stdlib.h>

// 4) Solicite uma palavra com no mínimo 5 caracteres e apresente apenas os 3 últimos;
int main()
{
    char palavra[50], tmp[50];
    int quantidade;

    do
    {
        printf("Informe uma palavra: ");
        gets(palavra);
        quantidade=strlen(palavra);
    } while (strlen(palavra) < 5);

    for (size_t i = 3; i>=1; i--)
    {
        printf("%c",palavra[quantidade-i]);
    }
    
    

    system("pause");
    return (0);
}
