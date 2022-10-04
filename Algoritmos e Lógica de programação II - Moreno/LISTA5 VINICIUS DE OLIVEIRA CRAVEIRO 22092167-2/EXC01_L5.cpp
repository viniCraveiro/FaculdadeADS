//1) Construir algoritmo que Leia um vetor de 10 elementos e posteriormente apresente a soma dos mesmos;
#include <stdio.h>
#include <stdlib.h>
#define tot 10

int main(){
	int x,n[tot];
	float soma;
	
	for (x=0; x<tot; x++){
		printf("Infor o %d. numero: ",x+1);
		scanf("%d",&n[x]);
		fflush(stdin);
		soma=soma+n[x];
	}
	
	printf("\n\nA soma dos numeros eh de %.2f\n\n",soma);

system("pause");

}

