#include <stdio.h>
#include <stdlib.h>

//3) AREA = (BASE x ALTURA) / 2.
int main() {
    double base, altura, area;

    printf("Informe o valor da BASE da sua area em M:");
    scanf("%lf", &base);
    fflush(stdin);
    printf("Informe o valor da ALTURA da sua area em M:");
    scanf("%lf", &altura);
    fflush(stdin);

    area = ((base * altura) / 2);

    printf("\n\nA area e de: %.3lf m2.\n\n", area);


    system("pause");
    return (0);
}
	
