//5) Construir um algoritmo que Leia um vetor de 8 elementos (V1) e preencha um outro (V2) em ordem inversa
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<time.h>
#define tot 8
	int v1[tot],v2[tot];

void sorteia(){
	int i,x;
	for (i=0; i<=tot; i++){
		v1[i]=rand()%100;

	}
}

void troca(int *a){
	int i,x=0;
		for (i=tot; i>=0; i--){
			v2[x]=v1[i];
			printf("%d. Vetor1: %d | %d. Vetor2: %d\n",i,v1[i],x,v2[x]);
			x++;
		}
}


int main(){
	int i;
	printf("Hello dev!\n\n");
	srand(time(NULL));
	sorteia();
	troca(&v1[i]);

	system("pause");

}

