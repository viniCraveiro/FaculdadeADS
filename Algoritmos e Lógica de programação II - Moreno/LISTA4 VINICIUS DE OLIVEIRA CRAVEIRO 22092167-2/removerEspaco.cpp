//Solicitar uma palavra (3 a 20 caracteres) e 
//remover os espaços
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
	char p1[50], p2[50];
	int  tam1,tam2,x,y=0;
	
	printf("Informe uma palavra: ");
	gets (p1);
	
	tam1=strlen(p1);
	
	for (x=0; x<tam1; x++){
		if (p1[x] != ' '){
			p2[y]=p1[x];
			y++;
		}
	}
	p2[y]='\0';
	
	printf("%s",p2);
	
	printf("\n\n\n");
	system("pause");
}
