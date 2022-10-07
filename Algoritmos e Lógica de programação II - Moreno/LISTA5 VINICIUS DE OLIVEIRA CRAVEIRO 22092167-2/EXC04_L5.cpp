//4) Construir um algoritmo que Leia um vetor de 15 elementos, iniciando a partir do último elemento (15º).
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<time.h>
#define tot 15

int main(){
	int y,x, n[tot];
	srand(time(NULL));
	y=tot;
	for (x=tot; x>=0; x--){
		
		n[x]=rand()%100;
		
		printf("%d: %d\n",y,n[x]);
		y--;
	}
	

system("pause");

}

