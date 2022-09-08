#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//

int main(){
	int x,y,tamanho;
	char palavra[50],palavra2[50];
	
	do{
	
	printf("Informe uma palavra: ");
	gets (palavra);
	tamanho=strlen(palavra);
	}while (tamanho<3);
	y=0;					
	for(x=tamanho-1; x>=0; x--){
		palavra2[y]=palavra[x];
		y++;
	}
	palavra2[tamanho]='\0';
	
	if (strcmp(palavra,palavra2)==0){
		printf("Trata-se de palindromo\n");
	}
	
	
	
	system("pause");
	return 0;
	}
