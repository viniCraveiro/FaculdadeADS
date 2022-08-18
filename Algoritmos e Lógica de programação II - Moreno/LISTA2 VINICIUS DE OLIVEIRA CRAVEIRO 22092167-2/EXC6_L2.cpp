#include <stdio.h>
#include <stdlib.h>

//6) Solicite ao usuário 3 números (supostamente distintos). No final, apresente o maior deles.
int main() {
	float n1,n2,n3;
	int i=1;
	
	printf("Informe o %d numero: ",i++);
	scanf("%f",&n1);
	
	printf("Informe o %d numero: ",i++);
	scanf("%f",&n2);
	
	printf("Informe o %d numero: ",i++);
	scanf("%f",&n3);
	
	if((n1>n2) && (n1>n3)){
		printf("O Primeiro numero é o maior, Numero %.2f",n1);
	} else if ((n2>n1) && (n2>n3)){
		printf("O Segundo numero é o maior, Numero %.2f",n2);	
	} else{
		printf("O Terceiro numero é o maior, Numero %.2f",n3);
	}


    system("pause");
    return (0);
}
