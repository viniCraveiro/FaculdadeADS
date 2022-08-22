#include <stdio.h>
#include <stdlib.h>

//13) Solicite dois nomes e apresente qual nome é maior (segundo a ordem alfabética)
int main() {
	char nome1[50], nome2[50];
	int i=1;
	
	printf("Informe o %d nome: ",i++);
	gets(nome1);
	
	printf("Informe o %d nome: ",i++);
	gets(nome2);
	
	if(nome1<nome2){
		printf("Nome Maior: %s\n"
		"Nome Menor: %s\n\n",nome1,nome2);
	}else{
		printf("Nome Maior: %s\n"
		"Nome Menor: %s\n\n",nome2,nome1);
	}

		

    system("pause");
    return (0);
}
