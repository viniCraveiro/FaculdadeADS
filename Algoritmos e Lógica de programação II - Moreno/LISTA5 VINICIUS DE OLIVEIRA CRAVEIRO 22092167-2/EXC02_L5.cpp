//2) Ler um vetor com 21 elementos numéricos, e apresentar finalmente ao usuário os elementos em ordem inversa ao da entrada;
#include <stdio.h>
#include <stdlib.h>
#define tot 21

int main(){
	int x,n[tot];
	
	for (x=0; x<tot; x++){
		printf("Informe %d o numero: ",x+1);
		scanf("%d",&n[x]);
		fflush(stdin);
	}
	
		for (x=tot-1; x>=0; x--){
		printf("%d\n",n[x]);

	}

system("pause");

}

