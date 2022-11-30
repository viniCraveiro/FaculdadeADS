//3) Solicite 6 nomes e armazene em um vetor denominado(nome. 
//Posteriormente, classifique o vetor V2 (de mesmo tamanho e tipo) 
//contendo os dados de(nome. Apresente V2 no final. Utilize o bubble sort.
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#define tot 3

char nome[tot][50];
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
		scanf("%s",nome[x]);
		fflush(stdin);
	}
	classificaDados();
	
}

void classificaDados(){
	int y,x;
	char tmp[50];
	for(x=0; x<tot-1; x++){
		for (y=x+1;y<tot; y++){
			if(strcmp(nome[x],nome[y])==1){
				strcpy(tmp,nome[x]);
				strcpy(nome[x],nome[y]);
				strcpy(nome[y],tmp);
			}
		}
	}
}

void apresentaDados(){
	int x,y=1;
	for(x=0;x<tot;x++){
		printf("Nome %d: %s\n",y,nome[x]);
		y++;
	}
}
