#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

//2) Ler duas vari�veis num�rica, e apresentar a soma das mesmas, acumulando ou n�o em outra vari�vel.
int main() {
    double n1, n2;

    printf("\nInforme o primeiro numero: ");
    scanf("%lf", &n1);
    fflush(stdin);
    printf("\nInforme o segundo numero: ");
    scanf("%lf", &n2);
    fflush(stdin);
    printf("A soma dos dois numeros � %.2lf", n1 + n2);

}
	

