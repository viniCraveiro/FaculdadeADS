#include <stdio.h>
#include <stdlib.h>

//7) Solicite ao usuário 3 números (supostamente distintos). No final, apresente o maior e o menor deles.
int main() {
	float n1,n2,n3,numeroMaior,numeroMenor;
	int i=1;
	
	printf("Informe o %d numero: ",i++);
	scanf("%f",&n1);
	
	printf("Informe o %d numero: ",i++);
	scanf("%f",&n2);
	
	printf("Informe o %d numero: ",i++);
	scanf("%f",&n3);
	
	if((n1>=n2) && (n1>=n3)){
		numeroMaior = n1;
	} else if ((n2>=n1) && (n2>=n3)){
		numeroMaior = n2;	
	} else if ((n3>=n1) && (n3>=n2)){
		numeroMaior = n3;
	}
	
		if((n1<=n2) && (n1<=n3)){
		numeroMenor = n1;
	} else if ((n2<=n1) && (n2<=n3)){
		numeroMenor = n2;	
	} else if ((n3<=n1) && (n3<=n2)){
		numeroMenor = n3;
	}
	
	printf("Maior %f\n",numeroMaior);
	printf("Menor %f\n",numeroMenor);

    system("pause");
    return (0);
}
