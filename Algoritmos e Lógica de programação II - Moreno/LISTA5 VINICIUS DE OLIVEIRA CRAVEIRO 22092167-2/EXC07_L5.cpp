//7) Solicite ao usuário 5 números inteiros, guarde-os em um vetor e em seguida apresente-os ao usuário. Finalmente, apresente também quantos elementos são negativos.
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<time.h>
#define tot 5
	int n[tot];

void solicitar(){
	int x=1;
	printf("Informe 5 Numeros inteiros.\n");
	for(int i=0;i<5;i++){
		printf("%d.: ",x);
		scanf("%d",&n[i]);
		fflush(stdin);
		x++;
	}
}

int verificaNegativo(){
	int cont=0,x=1;
	solicitar();
	for(int i=0; i<tot; i++){
		printf("\n%d. Numero: %d",x,n[i]);
		x++;
		if (n[i]<0){
			cont++;
		}
	}
	return cont;
}

int main(){
	int i;
	printf("Hello dev!\n\n");
	srand(time(NULL));
	printf("\n\nQtd de Negativos: %d",verificaNegativo());

	printf("\n\n");
	system("pause");

}

