// 1) Construa um programa que solicite 5 n�meros (entre 3 e 120)
// inserindo-os em um vetor, e posteriormente apresente o vetor em ordem crescente.
#include <stdio.h>
#include <stdlib.h>
#define tot 3

int numero[3];

void classificaNumero();
void solicitaNumero();
void apresentaNumero();

int main()
{
	solicitaNumero();
	classificaNumero();
	apresentaNumero();

	system("pause");
	return 0;
}

void solicitaNumero()
{
	int contador = 1;
	for (int i = 0; i < tot;)
	{
		printf("\nInforme o %d numero de 3 a 120: ", contador);
		scanf("%d", &numero[i]);
		fflush(stdin);
		if (numero[i] >= 3 && numero[i] <= 120)
		{
			printf("Boa!");
			i++;
			contador++;
		}
		else
		{
			printf("Numero Incorreto!");
			fflush(stdin);
		}
	}
}

void classificaNumero()
{
	int x = 0;
	for (x = 0;x < tot - 1; x++){
		for (int y = x + 1; y < tot; y++){
			if (numero[y] < numero[x])
			{
				int tmp = numero[x];
				numero[x] = numero[y];
				numero[y] = tmp;
			}
		}
	}
}

void apresentaNumero(){
	printf("\nNumeros Classificados:\n");
	for (int i = 0; i < tot; i++)
	{
		printf("%d\n",numero[i]);
	}
}