#include <stdio.h>
#include <stdlib.h>

// 2) Solicite uma palavra e apresente os 4 primeiros caracteres;
int main()
{
    char palavra[50], tmp[50];
    int i;

    printf("Informe uma palavra: ");
    gets(palavra);

    for (i = 0; i <= 3; i++)
    {
        printf("%c", palavra[i]);
    }

    system("pause");
    return (0);
}
