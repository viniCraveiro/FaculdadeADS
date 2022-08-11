	#include <stdio.h>
	#include <stdlib.h>
	
	//4) CAC = 3.1416 * R². Lembre-se que R² é o mesmo que (R * R).
	int main(){
	float raio, cac;
	
	printf("Informe o raio do seu circulo: ");
	scanf("%f",&raio);
	fflush(stdin);
	cac=(3.1416*(raio*raio));
		
	printf("A area do seu circulo e de %.2f\n\n",cac);
		
	system("pause");
	return (0);
	}
	
