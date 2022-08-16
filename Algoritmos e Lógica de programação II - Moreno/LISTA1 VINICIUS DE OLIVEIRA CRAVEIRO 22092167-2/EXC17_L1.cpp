#include <stdio.h>
#include <stdlib.h>

//17) Solicite o nome e idade de 4 pessoas e apresente a média no final

int main() {
	int idade1,idade2,idade3,idade4;
	char nome1[50],nome2[50],nome3[50],nome4[50];
	int x=1;
	float media;
	
	printf("%d)Informe o seu nome: ",x++);
	gets(nome1);
	printf("%s, Informe sua idade: ",nome1);
	scanf("%d",&idade1);
	fflush(stdin);
	
	printf("%d)Informe o seu nome: ",x++);
	gets(nome2);
	printf("%s, Informe sua idade: ",nome2);
	scanf("%d",&idade2);
	fflush(stdin);
	
	printf("%d)Informe o seu nome: ",x++);
	gets(nome3);
	printf("%s, Informe sua idade: ",nome3);
	scanf("%d",&idade3);
	fflush(stdin);
	
	printf("%d)Informe o seu nome: ",x++);
	gets(nome4);
	printf("%s, Informe sua idade: ",nome4);
	scanf("%d",&idade4);
	fflush(stdin);
	
	media=(idade1+idade2+idade3+idade4)/4;
	
	printf("A media da soma das idades sao de %.2f anos.\n\n",media);

    system("pause");
    return (0);
}

