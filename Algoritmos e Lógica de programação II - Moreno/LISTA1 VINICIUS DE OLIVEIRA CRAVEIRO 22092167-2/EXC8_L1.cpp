#include <stdio.h>
#include <stdlib.h>

//8) VPD = (L * L) * (H / 3)            Volume de Pir�mide
int main() {
    float vpd, h, l;

    printf("Informe o lado da sua piramide: ");
    scanf("%f", &l);
    fflush(stdin);
    l = l * l;

    printf("Informe a altura da piramide: ");
    scanf("%f", &h);
    fflush(stdin);

    vpd = (l * (h / 3));

    printf("O volume de sua piramide � de %.2f\n\n", vpd);

    system("pause");
    return (0);
}
	
