//3) Construa um algoritmo que solicite dois valores inteiros (base e expoente) e 
//posteriormente apresente (via retorno de fun��o) a base elevado ao expoente. 
//Obs. Utilizar la�o de repeti��o para construir a fun��o (n�o utilizar operador de pot�ncia)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define n 10
int base,expoente,potencia=1;
void solicitarBaseExpoente(){
	printf("Informe um numero inteiro para a Base: ");
	scanf("%d",&base);
	fflush(stdin);
	printf("Informe um numero inteiro para o Expoente: ");
	scanf("%d",&expoente);
	fflush(stdin);
}

int calculaBaseExpoente(){
	int x=0;
	while(x!=expoente){
		potencia=potencia*base;
		x++;
	}
	return potencia;
}
     
int main(){
	solicitarBaseExpoente();
	printf("\n\nO valor de %d elevado a %d: %d \n\n",base,expoente,calculaBaseExpoente());

    system("pause");
    return 0;
}

