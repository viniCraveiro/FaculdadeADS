#include <stdio.h>
#include <stdlib.h>

//18) Solicite ao usuário um número inteiro e apresente o RESTO da divisão por 2

int main() {
	int n1;
	float resto;
		
	printf("Informe um numero: ");
	scanf("%d",&n1);
	fflush(stdin);
	
	resto=n1%2;
	
	printf("O resto da divisao do numero %d dividido pelo numero 2 e de: %.f\n\n",n1,resto);

    system("pause");
    return (0);
}

