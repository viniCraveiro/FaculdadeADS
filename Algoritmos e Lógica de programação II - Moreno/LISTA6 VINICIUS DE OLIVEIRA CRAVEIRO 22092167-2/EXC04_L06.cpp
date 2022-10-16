//4) Construa um algoritmo que solicite uma frase (mínimo 10 e máximo 50 caracteres). 
//Posteriormente, retorne (através de funções) 
//a quantidade de vogais e quantidade de consoantes da frase.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define n 10
char frase[50];

void solicitaValidaFrase(){
	int qtdCaracter;
	do{
	printf("Informe uma frase com 10 caracteres ate 50: ");
	gets(frase);
	qtdCaracter=strlen(frase);
	}while(qtdCaracter<10 || qtdCaracter>50);
	
}

int qtdVogais(char frase[]){
	char vogais[] = "AEIOUaeiou";
	int numeroVogais=0,x=0,y=0;
	for(x=0; frase[x]!='\0';x++){
		for(y=0; vogais[y] != '\0'; y++){
			if(vogais[y] == frase[x]){
				numeroVogais++;
			}
		}
	}	
	return numeroVogais;
}

int qtdConsoante(char frase[]){
	char consoante[]="BCDFGJKLMNPQRSTVWXZbcdfgjklmnprqstvwxz";
	int numeroConsoante=0,x,y;
	for(x=0; frase[x]!='\0';x++){
		for(y=0; consoante[y] != '\0'; y++){
			if(frase[x] == consoante[y]){
				numeroConsoante++;
			}
		}
	}	
	return numeroConsoante;
}
     
int main(){
	solicitaValidaFrase();
	printf("\nQuantidade de vogal: %d",qtdVogais(frase));
	printf("\nQuantidade de Consoante: %d \n",qtdConsoante(frase));

    system("pause");
    return 0;
}

