#include <stdio.h>
#include <stdlib.h>

//6) Solicitar duas palavras, concatena-las em uma terceira, apresentando-a no final;
int main()
{
    char palavra[50],palavra2[50], palavra3[50];

    printf("Informe a primeira palavra: ");
    gets(palavra);
    printf("Informe a segunda palavra: ");
    gets(palavra2);

    strncat(palavra,palavra2,50);
    printf("%s",palavra);





    printf("\n\n\n");
        system("pause");
    return (0);
}
