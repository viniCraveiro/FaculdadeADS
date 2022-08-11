	#include <stdio.h>
	#include <stdlib.h>
	
	//10) VEF = (4/3) * 3.1416) * R³ Volume de Esfera.
	int main(){
		float vef,r;
	
	printf("Informe o raio da sua esfera: ");
	scanf("%f",&r);
	fflush(stdin);

	
	vef=((4/3)*3.1416)*(r*r*r);
	
	printf("O volume da esfera é de %.2f\n\n",vef);
	
	system("pause");
	return (0);
	}
	
