#include <stdio.h>
#include <stdlib.h>

//9) Solicite ao usu�rio um n�mero entre 10 e 45 e apresente ao usu�rio n�mero V�LIDO ou n�mero INV�LIDO
int main() {
	float numero;
	
	printf("Informe um numero entre 10 e 45:");
	scanf("%f",&numero);
	
	if(numero>=10 && numero<=45){
		printf("Numero Valido!\n");
	}else{
		printf("Numero Invalido!\n");
	}

    system("pause");
    return (0);
}
