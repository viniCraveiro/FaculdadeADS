#include <stdio.h>
#include <stdlib.h>

// 5) Solicitar uma palavra e apresentá-la na vertical (cada caractere será uma linha);
int main()
{
    char palavra[50];
    int tamanho;

    printf("Informe uma palavra: ");
    gets(palavra);
    tamanho = strlen(palavra);

    for (size_t i = 0; i < tamanho; i++)
    {
        printf("%c\n", palavra[i]);
    }

    system("pause");
    return (0);
}
