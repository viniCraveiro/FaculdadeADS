#include <stdio.h>
#include <stdlib.h>

//8) Levando em considera��o que a nota m�nima de aprova��o � 6,0 e a frequ�ncia m�nima seja de 75%, 
//solicite ao usu�rio 2 notas e calcule a m�dia. Solicite tamb�m qual � a carga hor�ria (n�mero de aulas) 
//da disciplina e tamb�m solicite a quantidade de presen�as que o aluno teve (em n�mero de aulas). 
//No fim, apresente se o aluno est� APROVADO ou REPROVADO.
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
