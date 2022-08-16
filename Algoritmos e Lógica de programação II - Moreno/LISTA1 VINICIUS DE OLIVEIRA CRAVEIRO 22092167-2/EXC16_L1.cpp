#include <stdio.h>
#include <stdlib.h>

//16) Construa um algoritmo que leia e apresente a soma de 5 números fornecidos pelo usuário

int main() {
	float n1,n2,n3,n4,n5;
	
	
	printf("Informe o 1° numero: ");
	scanf("%f",&n1);
	fflush(stdin);
	
	printf("Informe o 2° numero: ");
	scanf("%f",&n2);
	fflush(stdin);
    
    printf("Informe o 3° numero: ");
	scanf("%f",&n3);
	fflush(stdin);
	
	printf("Informe o 4° numero: ");
	scanf("%f",&n4);
	fflush(stdin);
	
	printf("Informe o 5° numero: ");
	scanf("%f",&n5);
	fflush(stdin);
    
    printf("\nA soma de %.2f + %.2f + %.2f + %.2f + %.2f = %.2f.\n\n",n1,n2,n3,n4,n5,n1+n2+n3+n4+n5);

    system("pause");
    return (0);
}

