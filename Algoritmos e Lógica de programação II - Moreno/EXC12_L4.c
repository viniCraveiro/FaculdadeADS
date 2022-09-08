//Solicitar uma palavra (3 a 20 caracteres) e 
//apresentar cada um dos caracteres adicionando o valor 10 ao código ASCII;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
	char palavra[50];
	int  i,tamanho;
	
	do{
		printf("Informe uma palavra (3-20 Caracteres): ");
		gets(palavra);
		tamanho=strlen(palavra);
	} while (strlen(palavra) <3 || strlen(palavra)>=20);
	
	for (i=0; i<tamanho; i++){
	
	printf("%c = %d + 10 == %d\n",palavra[i],palavra[i], palavra[i]+10);
	
	}
	
	printf("\n\n\n");
	system("pause");
}
