#include <stdio.h>
#include <stdlib.h>

//11) Solicite o ano qualquer no formato de 4 d�gitos, e apresente ao usu�rio se o ano � ou n�o Bissexto
int main() {
	int ano;
	
	printf("Informe o ano EX: 2000: ");
	scanf("%d",&ano);
	
	if ((ano%4)== 0){
		printf("Ano bisexto!\n");
	}	
		

    system("pause");
    return (0);
}
