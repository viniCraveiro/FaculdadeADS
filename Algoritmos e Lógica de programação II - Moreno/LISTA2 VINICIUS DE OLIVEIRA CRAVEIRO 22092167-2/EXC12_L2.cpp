#include <stdio.h>
#include <stdlib.h>

//12) Solicite um n�mero qualquer e informe ao usu�rio se o mesmo � �PAR� ou se � �IMPAR�
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
