#include <stdio.h>
#include <stdlib.h>

//9) VPM = L1 * L2 * L3               Volume de Prisma
int main() {
    float vpm, l1, l2, l3;

    printf("Informe o 1 lado do seu prisma: ");
    scanf("%f", &l1);
    fflush(stdin);

    printf("Informe o 2 lado do seu prisma: ");
    scanf("%f", &l2);
    fflush(stdin);

    printf("Informe o 3 lado do seu prisma: ");
    scanf("%f", &l3);
    fflush(stdin);

    vpm = l1 * l2 * l3;

    printf("O volume do Prisma � de %.2f\n\n", vpm);

    system("pause");
    return (0);
}
	
