#include <stdio.h>
#include <stdlib.h>

//1) Solicitar o nome e a idade de uma pessoa e informar ao usuário se ela já pode ou não tirar CNH
int main() {
	char nome[50];
	int idade;
	
	printf("Informe o nome: ");
	gets(nome);
	printf("Infome a idade em anos:");
	scanf("%d",&idade);
	
	if(idade>=18){
		printf("Você pode tirar CNH!\n\n");
	} else{
		printf("Você nao pode tirar CNH!\n\n");
	}

    system("pause");
    return (0);
}
	
