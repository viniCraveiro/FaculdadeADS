#include <stdio.h>
#include <stdlib.h>

//6)Solicite o nome, idade e sexo de uma pessoa. Valide o sexo entre (“F” / “M”) idade entre 10 e 100 anos
int main() {
    char nome[50];
    char sexo;
    int idade=0;

    printf("Informe seu nome: ");
    gets(nome);

    while ((sexo!='f' && sexo!='F') || (sexo!= 'm' && sexo!='M'))
    {
    printf("Informe seu Sexo(F/M):");
    scanf("%c",sexo);
    fflush(stdin);
    }
    printf("seila");
        


    system("pause");
    return (0);
}
	
