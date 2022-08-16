#include <stdio.h>
#include <stdlib.h>

//13) Informado 3 números, apresente a soma do primeiro com o terceiro, multiplicando pelo segundo.
int main() {
	int n1,n2,n3,soma;
	
	
	printf("Informe o 1° numero: ");
	scanf("%d",&n1);
	fflush(stdin);
	printf("Informe o 2° numero: ");
	scanf("%d",&n2);
    printf("Informe o 3° numero: ");
    scanf("%d",&n3);
    
    soma=n1+n3;
    
    printf("\nA soma de %d + %d (*%d) total de %d.\n\n",n1,n3,n2,soma*n2);

    system("pause");
    return (0);
}

