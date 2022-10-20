#include <stdio.h>
#include <stdlib.h>
//2) Construa um algoritmo que calcule e apresente do volume de uma esfera (V=4/3*PI*R3) passando o valor do raio por parâmetro para uma função.
double raio;

double calculeVolumeEsfera(double raio);

int main(){
	printf("Informe o raio de sua esfera: ");
	scanf("%lf",&raio);
	fflush(stdin);
	printf("%lf",raio);
	printf("\nO volume de sua esfera e de: %.2f\n",calculeVolumeEsfera(raio));
	
	
	system("pause");
	return 0;
}

double calculeVolumeEsfera(double raio){
	double volume;
	double pi = 3.14159265358979323846;
	volume = (4*pi*raio*raio*raio)/3;
	printf("\n\n%lf\n\n\n%lf",volume,raio);
	return volume;
}

