#include <stdio.h>
#include <stdlib.h>

//11) Ler 3 notas e apresentar a média das mesmas.
int main() {
    float n1, n2, n3, media;
    printf("Informe a 1 nota: ");
    scanf("%f", &n1);
    fflush(stdin);

    printf("Informe a 2 nota: ");
    scanf("%f", &n2);
    fflush(stdin);

    printf("Informe a 3 nota: ");
    scanf("%f", &n3);
    fflush(stdin);

    media = (n1 + n2 + n3) / 3;

    printf("A media das notas sao: %.2f\n\n", media);

    system("pause");
    return (0);
}
	
