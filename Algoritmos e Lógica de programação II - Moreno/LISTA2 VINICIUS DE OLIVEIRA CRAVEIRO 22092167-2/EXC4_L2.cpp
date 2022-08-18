#include <stdio.h>
#include <stdlib.h>

//4) Solicite dois valores e apresente o maior e o menor elemento. Caso sejam iguais, informe ao usuário
int main() {
	float n1,n2;
	int x=1;
	
	printf("Informe o %d° valor: ",x++);
	scanf("%f",&n1);
	fflush(stdin);
	
	printf("Informe o %d° valor: ",x++);
	scanf("%f",&n2);
	fflush(stdin);
	
	if(n1>n2){
		printf("Valor Maior: %.2f\n"
				"Valor Menor: %.2f\n\n",n1,n2);
	}
	else if (n2>n1){
		printf("Valor Maior: %.2f\n"
				"Valor Menor: %.2f\n\n",n2,n1);
	} else{
		printf("Os valores informados sao iguais.\n\n");
	}


    system("pause");
    return (0);
}
	
