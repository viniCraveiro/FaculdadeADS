#include <stdio.h>
#include <stdlib.h>

//14) Sendo dado dois números pelo usuário, apresente a décima parte da subtração de um pelo outro, utilizando uma 
//terceira variavel.

int main() {
	float n1,n2,x;
	
	
	printf("Informe o 1° numero: ");
	scanf("%f",&n1);
	fflush(stdin);
	printf("Informe o 2° numero: ");
	scanf("%f",&n2);

	x=(n1-n2)/10;
    
    printf("\nA subtracao de %.2f - %.2f (/10) e o total de %.2f.\n\n",n1,n2,x);

    system("pause");
    return (0);
}

