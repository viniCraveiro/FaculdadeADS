//1) Construa um programa que solicite 5 números (entre 3 e 120) 
//inserindo-os em um vetor, e posteriormente apresente o vetor em ordem crescente.
#include<stdio.h>
#include<stdlib.h>
#define tot 3

int numero[tot];

void solicitaNumero();

int main(){
	solicitaNumero();
		
	
	system("pause");
	return 0;
}

void solicitaNumero(){
	int contador=1;
	int x;
	for(int i=0; i<3; i++){
		printf("Informe o %d numero de 3 a 120: ",contador);
		scanf("%d",&numero[tot]);
		if(numero[tot] < 3 || numero[tot] > 120){
			scanf("%d",&numero[tot]);
			printf("Erro\n");
		}
			contador++;
	}
	
}
