//Solicitar uma palavra (5 a 10 caracteres) e apresentar cada caractere alternando em MAIUSCULO e MINUSCULO cada um dos caracteres;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
	char palavra[50];
	int  cont;
	
	do{
		printf("Informe uma palavra (5-10 Caracteres): ");
		gets(palavra);
		
	} while (strlen(palavra) <5 || strlen(palavra)>10);
	
	for(cont=0; cont<strlen(palavra); cont++){
		if (cont%2==0){
			printf("%c",toupper(palavra[cont]));
		}else{
			printf("%c",tolower(palavra[cont]));
		}
	}
	
	
	printf("\n\n\n");
	system("pause");
}
