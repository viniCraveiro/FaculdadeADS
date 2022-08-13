#include <stdio.h>
#include <stdlib.h>

//7) VCN = ((3.1416 * R�) / 3) * H         		 Volume de um Cone
int main() {
    float vcn, h, r;

    printf("Informe o raio do seu cone: ");
    scanf("%f", &r);
    fflush(stdin);
    r = r * r;

    printf("Informe a altura do seu cone: ");
    scanf("%f", &h);
    fflush(stdin);

    vcn = ((3.1416 * r) / 3) * h;

    printf("O perimetro do seu cone � de %.2f\n\n", vcn);

    system("pause");
    return (0);
}
	
