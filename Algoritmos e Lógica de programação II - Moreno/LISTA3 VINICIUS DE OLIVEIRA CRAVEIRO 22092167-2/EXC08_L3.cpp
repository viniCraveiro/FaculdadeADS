#include <stdio.h>
#include <stdlib.h>

//8) Apresente todos os n�meros pares entre 5 e 50 (um na frente do outro) � Utilize o REPITA ATE
int main() {
	//float n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15,media;
	float numero,soma,media;
	int i=1;
	
	while (i <=15){
		printf("Informe o numero %d de 10 a 50: ",i);
		scanf("%f",&numero);
		if (numero>=10 && numero<=50){
			soma=soma+numero;
			i++;
		}
	}
	media=soma/15;
	
	printf("\n\nMedia: %.2f\n\n",media);
	
	

    system("pause");
    return (0);
}
	
