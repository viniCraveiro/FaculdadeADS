#include <stdio.h>
#include <stdlib.h>

//15) Baseado no exerc�cio anterior, fa�a o mesmo processo sem fazer uso de uma terceira vari�vel.

int main() {
	float n1,n2,x;
	
	
	printf("Informe o 1� numero: ");
	scanf("%f",&n1);
	fflush(stdin);
	printf("Informe o 2� numero: ");
	scanf("%f",&n2);
	fflush(stdin);
    
    printf("\nA subtracao de %.2f - %.2f (/10) e o total de %.2f.\n\n",n1,n2,(n1-n2)/10);

    system("pause");
    return (0);
}

