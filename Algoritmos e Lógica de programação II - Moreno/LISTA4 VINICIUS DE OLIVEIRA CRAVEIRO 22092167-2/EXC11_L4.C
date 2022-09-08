//Solicitar uma palavra (4 a 15 caracteres) e apresentar o código ASCII de cada caractere;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
	char palavra[50];
	int  i,tamanho;
	
	do{
		printf("Informe uma palavra (4-15 Caracteres): ");
		gets(palavra);
		tamanho=strlen(palavra);
	} while (strlen(palavra) <4 || strlen(palavra)>=15);
	
	for (i=0; i<tamanho; i++){
	
	printf("%c = %d\n",palavra[i],palavra[i]);
	
	}
	
	printf("\n\n\n");
	system("pause");
}
