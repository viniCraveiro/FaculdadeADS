#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int main(){
	char nome;
	float salario, novosalario;
	printf("Qual seu nome? ");
	scanf("%c",&nome);
	fflush(stdin);
	printf("Qual seu salario? ");
	scanf("%f",&salario);
	fflush(stdin);
	novosalario = salario * 1.285;
	printf("salario reajustado %.2f \n",novosalario);
}

//}



//int main(void){
//	char nome[50];
//	printf ("Informe seu nome: ");
//	gets(nome);
//	
//	printf ("\nSeu nome e: %s\n\n\n",nome);
//	system("pause");
//	getch();
//	return 0;
