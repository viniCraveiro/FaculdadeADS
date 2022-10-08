//6) Faça um algoritmo que Leia um vetor (V1) de 10 elementos numéricos e preencha um outro (V2) contendo em cada célula o dobro de V1, e em seguida um terceiro vetor (V3) contendo em cada célula a metade de V1.
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<time.h>
#define tot 10
	int v1[tot],v2[tot],v3[tot];

void sorteia(){
	int i,x;
	for (i=0; i<=tot; i++){
		v1[i]=rand()%100;
	}
}

int dobro(int *a){
	int i,x=0;
		for (i=0; i<=tot; i++){
			v2[x]=v1[i]*2;
			x++;
		}
		return v2[x];
}

int metade(int *a){
	int i,x=0;
		for (i=0; i<=tot; i++){
			v3[x]=v1[i]/2;
			x++;
		}
		return v3[x];
}

void print(){
	int x,y,z;
	sorteia();
	printf("| Vetor 1 | Vetor 2 (Dobro) | Vetor 3 (Metade) |");
	for (int i=0; i<=tot; i++){
	dobro(&v1[i]);
	metade(&v1[i]);
	printf("\n|   %3d   |       %3d       |        %3d       |",v1[i],v2[i],v3[i]);
	
	}
}



int main(){
	int i;
	printf("Hello dev!\n\n");
	srand(time(NULL));
	print();

	
	printf("\n\n");
	system("pause");

}

