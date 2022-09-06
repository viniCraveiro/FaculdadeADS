#include <stdio.h>
#include <stdlib.h>

// Solicitar uma palavra, copiar e apresentar apenas 3 caracteres a partir do segundo caractere;
int main()
{
    char palavra[50], tmp[50];

    printf("Informe uma palavra: ");
    gets(palavra);

    for (size_t i = 1; i <= 3; i++)
    {
        printf("%c", palavra[i]);
    }

    system("pause");
    return (0);
}
