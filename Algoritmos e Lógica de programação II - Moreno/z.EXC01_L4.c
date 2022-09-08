#include <stdio.h>
#include <stdlib.h>

//1) Construir algoritmo que Leia um vetor de 10 elementos e posteriormente apresente a soma dos mesmos;

int main() {
    int idade[9],x,soma;

	for (x=0; x<9; x++){
	
	printf("Informe um numero:");
	scanf("%d",&idade[x]);
    soma=soma+idade[x];
		}    
		
	printf("Soma: %d\n\n",soma);


    system("pause");
    return (0);
}
	
