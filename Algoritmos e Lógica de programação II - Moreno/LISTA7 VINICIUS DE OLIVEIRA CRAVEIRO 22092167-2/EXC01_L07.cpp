#include <stdio.h>
#include <stdlib.h>
//Construa um algoritmo que apresente (ap�s retorno da fun��o) se um valor inteiro informado pelo usu�rio � ou n�o perfeito. 
//Um valor � dito perfeito quando ele � igual a soma dos seus divisores exceto ele pr�prio. 
//(Ex: 6 � perfeito, 6 = 1 + 2 + 3, que s�o seus divisores). A fun��o deve retornar um valor booleano (l�gico).
bool nPerfeito(int n);

int valor;
int main(){
	printf("Informe um valor: ");
	scanf("%d",&valor);
	if(nPerfeito(valor)==true){
		printf("\nO numero e perfeito\n\n");
	} else {
		printf("\nO numero nao e perfeito\n\n");
	}

	
	system("pause");
	return 0;
}

	bool nPerfeito(int n){
		int soma =0, x=0;
		for (x=1;x<n;x++){
			if(n%x==0){
				soma=soma+x;
			}
		}
		if (soma==n){
			return true;
		} else{
			return false;
		}
	}
