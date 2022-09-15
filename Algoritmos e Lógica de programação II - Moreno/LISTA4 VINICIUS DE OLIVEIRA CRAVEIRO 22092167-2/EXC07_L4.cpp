//7) Solicitar uma palavra e apresentá-la toda em MAIUSCULA
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main()
{
    int x=0;
    char palavra[50],palavra2[50];

	printf("Informe uma palavra:");
	gets(palavra);
	while (palavra[x] != '\0'){
		palavra2[x]=toupper(palavra[x]);
		x++;
	}
	palavra2[x]='\0';	
	

	printf("%s",palavra2);



    printf("\n\n\n");
    system("pause");
    return (0);
}

