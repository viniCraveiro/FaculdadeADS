#include <stdio.h>
#include <stdlib.h>
//Construa um algoritmo que apresente (após retorno da função) se um valor inteiro informado pelo usuário é ou não perfeito. 
//Um valor é dito perfeito quando ele é igual a soma dos seus divisores exceto ele próprio. 
//(Ex: 6 é perfeito, 6 = 1 + 2 + 3, que são seus divisores). A função deve retornar um valor booleano (lógico).
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
