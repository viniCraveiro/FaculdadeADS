#include <stdio.h>
#include <stdlib.h>

//5) Solicite o nome, a idade e o salário de uma pessoa. Calcule e apresente o novo salário, de acordo com os critérios abaixo:
//Idade até 35 anos, aumento de 12%
//Idade entre 36 e 50 anos, aumento de 14,5%
//Idade superior a 50 anos, aumento de 17%
int main() {
	char nome[50];
	float salario, salarionovo;
	int idade;
	
	printf("Informe o nome: ");
	gets(nome);
	
	printf("Informe a idade: ");
	scanf("%d",&idade);
	
	printf("Informe o salario R$: ");
	scanf("%f",&salario);
	
	if (idade<=35){
		salarionovo=salario*1.12;
		printf("%s, Idade de %d anos, teve um aumento de salario, \nSeu novo salario e de R$ %.2f\n\n",nome,idade,salarionovo);
	} else if ((idade>=36) && (idade<=50)){
		salarionovo=salario*1.145;
		printf("%s, Idade de %d anos, teve um aumento de salario, \nSeu novo salario e de R$ %.2f\n\n",nome,idade,salarionovo);
	} else{
		salarionovo=salario*1.17;
		printf("%s, Idade de %d anos, teve um aumento de salario, \nSeu novo salario e de R$ %.2f\n\n",nome,idade,salarionovo);
	}

    system("pause");
    return (0);
}
