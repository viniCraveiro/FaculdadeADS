#include <stdio.h>
#include <stdlib.h>

//12) Conhecido 3 números inteiros, apresente o resultado da multiplicação dos mesmos
int main() {
	int n1,n2,n3;
	
	printf("Informe o 1° numero: ");
	scanf("%d",&n1);
	fflush(stdin);
	printf("Informe o 2° numero: ");
	scanf("%d",&n2);
    printf("Informe o 3° numero: ");
    scanf("%d",&n3);
    
    printf("\nA multiplicacao desses 3 numeros e o total de %d.\n\n",n1*n2*n3);

    system("pause");
    return (0);
}

