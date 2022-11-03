// preencha automaticamente um vetor com 20 elementos   entre 100 e 199 (não repetidos)
// apresente o vetor;
// classifique o vetor em ordem crescente;
// apresente o vetor;
// solicite um valor para ser pesquisado;
// efetue uma busca binária e apresente a frase "não encontrado" ou "encontrado no endereço xx.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define numero 20
int vetor[numero];
void preencheVetor();
void apresentaVetor();
void classificaVetor();


int main(){
	srand(time(NULL));
	preencheVetor();
	classificaVetor();
}

void preencheVetor(){
	int i=0,n;
	for(i=0; i<=numero;i++){
		n=100+(rand()%90);//verificar e tirar repetidos
		vetor[i]=n;
	}
	apresentaVetor();
}

void apresentaVetor(){
	int i;
	for(i=0;i<numero; i++)
		printf("\n%d",vetor[i]);
	
}

void classificaVetor(){
	int x,y;
	for()
	
}

