#include <stdio.h>
#include <stdlib.h>

//6)Solicite o nome, idade e sexo de uma pessoa. Valide o sexo entre (“F” / “M”) idade entre 10 e 100 anos
int main() {
    char nome[50];
    char sexo;
    int idade;

    printf("Informe seu nome: ");
    gets(nome);

    while ((sexo!='F') && (sexo!='f') && (sexo!='m') && ( sexo!='M')){
    	printf("Informe seu Sexo(F/M):");
    	scanf("%c",&sexo);
    	fflush(stdin);
    }
    
    
    do{
    	printf("Informe sua idade (10 a 100 anos):");
    	scanf("%d",&idade);
    	fflush(stdin);
	}while ((idade<10) || (idade>100));
	
	
    printf("Nome: %s \nSexo: %c \nIdade: %d\n\n",nome,sexo,idade);


    system("pause");
    return (0);
}
	
