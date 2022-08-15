#include <stdio.h>
#include <stdlib.h>

//3) Solicite dois valores (supostamente distintos) e apresente qual é o maior valor
int main() {
	float n1,n2;
	int x=1;
	
	printf("Informe o %d° valor: ",x++);
	scanf("%f",&n1);
	fflush(stdin);
	
	printf("Informe o %d° valor: ",x++);
	scanf("%f",&n2);
	fflush(stdin);
	
	if(n1>n2){
		printf("O primeiro valor é o maior valor.\n\n");
	}
	else{
		printf("O Segundo valor é o maior valor.\n\n");
	}


    system("pause");
    return (0);
}
	
