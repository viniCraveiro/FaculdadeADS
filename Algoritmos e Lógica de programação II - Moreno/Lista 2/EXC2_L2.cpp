#include <stdio.h>
#include <stdlib.h>

//2) Solicite um valor e apresente as mensagens: “Valor positivo”, “Valor negativo” ou “Zero”
int main() {
	float valor;
	
	printf("Informe um valor: ");
	scanf("%f",&valor);
	fflush(stdin);
	
	if(valor>=1){
		printf("Valor Positivo (+) !\n\n");
	} else if(valor==0){
		printf("Zerooo !!\n\n");
	}
	 else{
		printf("Valor Negativo (-) !!\n\n");
	}

    system("pause");
    return (0);
}
	
