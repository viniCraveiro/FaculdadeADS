//2) Solicite 10 nomes e armazene em um vetor denominado V1. 
//Posteriormente, classifique-o em ordem crescente e apresente ao usuário. Utilize o selection sort
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#define tot 3

char v1[10][50];
void entradaDados();
void classificaDados();
void apresentaDados();

int main(){
	entradaDados();
	apresentaDados();	
	
	system("pause");
	return 0;
}

void entradaDados(){
	int x;
	for (x=0; x<tot; x++){
		printf("Informe o nome: ");
		gets(v1[x]);
	}
	classificaDados();
	
}

void classificaDados(){
	int y,x;
	char tmp[50];
	for(x=0; x<tot-1; x++){
		for (y=x+1;y<tot; y++){
			if(strcmp(v1[x],v1[y])==1){
				strcpy(tmp,v1[x]);
				strcpy(v1[x],v1[y]);
				strcpy(v1[y],tmp);
			}
		}
	}
}

void apresentaDados(){
	int x,y=1;
	for(x=0;x<tot;x++){
		printf("Nome %d: %s\n",y,v1[x]);
		y++;
	}
}
