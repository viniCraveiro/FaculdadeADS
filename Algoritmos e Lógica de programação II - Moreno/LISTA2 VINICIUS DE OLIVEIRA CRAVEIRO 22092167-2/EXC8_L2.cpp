#include <stdio.h>
#include <stdlib.h>

//8) Levando em consideração que a nota mínima de aprovação é 6,0 e a frequência mínima seja de 75%, 
//solicite ao usuário 2 notas e calcule a média. Solicite também qual é a carga horária (número de aulas) 
//da disciplina e também solicite a quantidade de presenças que o aluno teve (em número de aulas). 
//No fim, apresente se o aluno está APROVADO ou REPROVADO.
int main() {
	float nota1,nota2,media;
	int aulas,frequencia;
	int i=1;
	
	printf("Informe a %d nota de 0 a 10: ",i++);
		scanf("%f",&nota1);
	printf("Informe a %d nota de 0 a 10: ",i++);
		scanf("%f",&nota2);
	
	media=(nota1+nota2)/2;
	
	printf("Informe quantas aulas serao: ");
		scanf("%d",&aulas);
	printf("Quantas presencas o aluno teve: ");
		scanf("%d",&frequencia);
	
	if((frequencia>=aulas*0.75) && (media>=6)){
		printf("\nAprovado!\n\n",&frequencia);
	}else{
		printf("\nReprovado!\n\n");
	}

    system("pause");
    return (0);
}
