#include <stdio.h>
#include <stdlib.h>

//12) Solicite um número qualquer e informe ao usuário se o mesmo é “PAR” ou se é “IMPAR”
int main() {
	int numero;
	
	printf("Informe um numero: ");
	scanf("%d",&numero);
	
	if ((numero%2)== 0){
		printf("Numero Par!!\n");
	}else {
		printf("Numero Impar!!\n");
	}
		

    system("pause");
    return (0);
}
