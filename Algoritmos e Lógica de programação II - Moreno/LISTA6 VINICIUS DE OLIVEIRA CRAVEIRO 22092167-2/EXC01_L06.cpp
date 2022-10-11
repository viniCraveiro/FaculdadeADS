//bubble sort
//1) Construa um algoritmo que preencha randomicamente um vetor (V1) contendo 10 elementos
//numéricos não repetidos. Posteriormente, construa uma função que retorne o maior elemento
//do vetor
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<time.h>//necessário p/ função time()
#define tot 10
int v1[tot];

void sorteia(){
	bool existe;
	int i,y,tmp;
	for (i=0; i < tot; i++){
		do{
		tmp=rand() % 25;
		existe=false;
			for (y=0; y<10; y++){
				if(tmp==v1[y]){
				existe=true;
				}
			}
		}while (existe==true);
  		v1[i]=tmp;
	  }
}

int maior(){
	int m,x;
	m=-1;
	for (x=0; x<10; x++){
		if(v1[x]>m){
			m=v1[x];
		}
	}
	return m;
}

void apresenta(){
	for (int i=0; i < tot; i++){
  		printf("%d\n",v1[i]);
	  }
}


int main(){
  srand(time(NULL));
  sorteia();
  apresenta();
  printf("Maior elemento %d \n",maior());
	

  getch();
  return 0;
}
