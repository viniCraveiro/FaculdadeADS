	#include <stdio.h>
	#include <stdlib.h>
	
	//CPC = 3.1416 * D, sendo que D = R + R.
	int main(){
		float cpc,d,r;
	
	printf("Informe o raio do seu circulo: ");
	scanf("%f",&r);
	
	d=(r*2);
	cpc = (3.1416*d);
	
	printf("O perimetro do seu circulo é de %f\n\n",cpc);
	
		
		
	system("pause");
	return (0);
	}
	
