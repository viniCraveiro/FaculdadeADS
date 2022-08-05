	#include <stdio.h>
	#include <stdlib.h>
	#include<conio.h>
	
	int main(){
		char nome[50];
		float salario, novosalario;
		printf("Qual seu nome? ");
		gets(nome);
		fflush(stdin);
		printf("Qual seu salario? ");
		scanf("%f",&salario);
		fflush(stdin);
		novosalario = salario * 1.285;
		printf("salario reajustado %.2f \n",novosalario);
		system("pause");
		return 0;
	}
	

