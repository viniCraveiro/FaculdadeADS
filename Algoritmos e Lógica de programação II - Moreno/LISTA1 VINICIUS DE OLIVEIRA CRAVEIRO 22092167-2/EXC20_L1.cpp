#include <stdio.h>
#include <stdlib.h>

//20) Construa um algoritmo que solicite 5 números e apresente a média ponderada dos mesmos, considerando 
//respectivamente os pesos 2, 4, 2, 5 e 3.


int main() {
	float n1,n2,n3,n4,n5,media;
	int x=1;
	
	printf("Informe o %d numero: ",x++);
	scanf("%f",&n1);
	fflush(stdin);
	n1=n1*2;
	
	printf("Informe o %d numero: ",x++);
	scanf("%f",&n2);
	fflush(stdin);
	n2=n2*4;
	
	printf("Informe o %d numero: ",x++);
	scanf("%f",&n3);
	fflush(stdin);
	n3=n3*2;
	
	printf("Informe o %d numero: ",x++);
	scanf("%f",&n4);
	fflush(stdin);
	n4=n4*5;
	
	printf("Informe o %d numero: ",x++);
	scanf("%f",&n5);
	fflush(stdin);
	n5=n5*3;
	
	
	printf("A media ponderada tem o valor de: %.2f\n\n",(n1+n2+n3+n4+n5)/16);

    system("pause");
    return (0);
}

