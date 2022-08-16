#include <stdio.h>
#include <stdlib.h>

//19) Solicite o nome, idade, profissão e o salário de uma pessoa. Posteriormente, apresente todos os dados e o valor 
//que será descontado de seu salário para despesas de plano de saúde, considerando que seja descontado 1,3% do 
//salário.


int main() {
	int idade;
	char nome[50],profissao[50];
	float salario, desconto, salarionovo;
		
	printf("Informe o nome: ");
	gets(nome);
	fflush(stdin);
	
	printf("Quantos anos possui: ");
	scanf("%d",&idade);
	fflush(stdin);
	
	printf("Qual sua profissao? ");
	gets(profissao);
	fflush(stdin);
	
	printf("Qual o salario? ");
	scanf("%f",&salario);
	fflush(stdin);
	
	desconto=salario*0.13;
	salarionovo=salario-desconto;
	
	printf("\n\nNome: %s\n"
			"Idade: %d\n"
			"Profissao: %s\n"
			"Salario Bruto: %.2f\n"
			"Desconto: %.2f\n"
			"Salario Liquido: %.2f\n\n\n\n",nome,idade,profissao,salario,desconto,salarionovo);

    system("pause");
    return (0);
}

