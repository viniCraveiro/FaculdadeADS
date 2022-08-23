#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//13) Solicite dois nomes e apresente qual nome é maior (segundo a ordem alfabética)
int main() {
	char nome1[50], nome2[50];
	int i=1, retorno;
	
	printf("Informe o %d nome: ",i++);
	gets(nome1);
	
	printf("Informe o %d nome: ",i++);
	gets(nome2);
	
	//strcpy (nome1,toupper(nome1));
	//nome2 = toupper(nome2);
	
  retorno = strcmp(nome1,nome2);
  printf("\n\nretorno= %d", retorno);
  if (retorno == -1)
     printf("\nNome Menor(A-Z): %s"
	 	"\nNome Maior(Z-A): %s\n",&nome1,&nome2);
  else
     if (retorno == 1)
       printf("\nNome Menor(A-Z): %s"
	 	"\nNome Maior(Z-A): %s\n",&nome2,&nome1);
      else
        printf("\nOs nomes sao iguais");

		

    system("pause");
    return (0);
}
