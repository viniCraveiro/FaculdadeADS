//3) Elaborar um algoritmo que solicite e armazene em um vetor as idades de 7 pessoas. Posteriormente apresente a Média das Idades;
#include <stdio.h>
#include <stdlib.h>
#define tot 7

int main(){
	int x,idade[tot];
	float media;
	
	for (x=0; x<tot; x++){
		printf("Informe a idade da %d pessoa: ",x+1);
		scanf("%d",&idade[x]);
		fflush(stdin);
		media=media+idade[x];
	}
	
	media=media/7;
	printf("A media de idade: %.2f",media);

system("pause");

}

