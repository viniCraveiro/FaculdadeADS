#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//

int main(){
	int x,tamanho;
	char palavra[50];
	
	do{
	
	printf("Informe uma palavra: ");
	gets (palavra);
	tamanho=strlen(palavra);
	}while (tamanho<3);					
	for(x=tamanho-1; x>=0; x--){
		printf("%c",palavra[x]);
		
	}
	
	
	
	system("pause");
	return 0;
	}
