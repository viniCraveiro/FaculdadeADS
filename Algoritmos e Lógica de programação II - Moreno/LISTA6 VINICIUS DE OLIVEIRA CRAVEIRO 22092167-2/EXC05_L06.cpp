//5) Construir um algoritmo que solicite e armazene o 
//RA, nome, idade, nota1, nota2, sub de 10 alunos. 
//Calcule as médias e armazene-as. Posteriormente, 
//solicite o RA de um aluno e retorne TODOS os dados do mesmo ou a mensagem “Aluno não encontrado”. 
//Em seguida, pergunte se o usuário deseja efetuar outra pesquisa.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tot 3
char nome[tot][50],ra[tot][10];
int idade[tot];
double nota1[tot],nota2[tot],notaSub[tot],media[tot];
int i=1, x=0;


void registraDados(){
	char fezSub;
	bool possuiSub=false;
	for(i=1; i<=tot;i++){
	printf("Informe o nome do %d aluno: ",i);
	gets(nome[x]);
//	printf("Informe o RA do %d aluno: ",i);
//	gets(ra[x]);
//	printf("Informe a idade do %d aluno: ",i);
//	scanf("%d",&idade);
//	fflush(stdin);
	solicitaNota();
	do{
		printf("o aluno %d possui SUB? (S/N):",i);
		scanf("%c",&fezSub);
		fflush(stdin);
 	}while(fezSub == 'N' && fezSub == 'n');

	printf("Aluno Cadastrado\n");
	x++;
	}
}

void solicitaNota(){
	printf("Informe a 1. nota do %d aluno: ",i);
	scanf("%d",&nota1[x]);
	fflush(stdin);
	printf("Informe a 2. nota do %d aluno: ",i);
	scanf("%d",&nota2[x]);
	fflush(stdin);
}

void solicitaNotaSub(){
	printf("Informe a nota sub do %d aluno: ",i);
	scanf("%d",&notaSub);
	fflush(stdin);
}

void calculaMedia(){
	
}

     
int main(){
	registraDados();

    system("pause");
    return 0;
}

