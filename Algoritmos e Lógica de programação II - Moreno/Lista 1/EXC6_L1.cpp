#include <stdio.h>
#include <stdlib.h>

//6) CVC = (3.1416 * R�) * H Volume de C�rculo
int main() {
    float cvc, h, r;

    printf("Informe o raio do seu circulo: ");
    scanf("%f", &r);
    fflush(stdin);
    r = r * r;

    printf("Informe a altura do seu circulo: ");
    scanf("%f", &h);
    fflush(stdin);

    cvc = (3.1416 * r) * h;

    printf("\n\nO volume do seu circulo � de %.2f\n\n", cvc);

    system("pause");
    return (0);
}
	
