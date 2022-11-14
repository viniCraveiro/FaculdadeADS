// Construa um programa em linguagem C, utilizando struct, que solicite o c�digo, nome,
// endere�o e telefone de 10 pessoas.
#include <stdio.h>
#include <stdlib.h>
#define tot 2
//=========PROTOTIPAÇÃO==========
void solicitaDados();
void solicitaCodigo(int i);
void solicitaNome(int i);
void solicitaEndereco(int i);
void solicitaTelefone(int i);
void apresentaDados();

//=========STRUCT==========
struct pessoa
{
	char codigo[50];
	char nome[50];
	char endereco[60];
	char telefone[11];
};
	struct pessoa pe[tot];

//=========PRINCIPAL==========
int main()
{
	int i;
	solicitaDados();
	apresentaDados();


	printf("\n\n");
	system("pause");
}

//=========SOLICITA DADOS==========
void solicitaDados()
{
	int i;
	for (i = 0; i < tot; i++)
	{
		printf("========= %d PESSOA1111 =========\n", i+1);
		printf("========> valor do indice: %d", i);
		solicitaCodigo(i);
		printf("========> valor do indice: %d", i);
		solicitaNome(i);
		printf("========> valor do indice: %d", i);
		solicitaEndereco(i);
		printf("========> valor do indice: %d", i);
		solicitaTelefone(i);
	}

}
void solicitaCodigo(int i)
{
	printf("Informe o codigo: ");
	printf("\n>>>>>>>>>indice DO METADO %d<<< RESPOSTAAAAA: ", i);
		gets(pe[i].codigo);
}
void solicitaNome(int i)
{
	printf("Informe o nome: ");
	printf("\n>>>>>>>>>indice DO METADO %d<<< RESPOSTAAAAA: ", i);
		gets(pe[i].nome);
}
void solicitaEndereco(int i)
{
	printf("Informe o endereco: ");
	printf("\n>>>>>>>>>indice DO METADO %d<<< RESPOSTAAAAA: ", i);
		gets(pe[i].endereco);
}
void solicitaTelefone(int i)
{
	printf("Informe o telefone: ");
	printf("\n>>>>>>>>>indice DO METADO %d<<< RESPOSTAAAAA: ", i);
	gets(pe[i].telefone);
}

//=========APRESENTA DADOS==========
void apresentaDados()
{
	int i = 0;
	for (i = 0; i < tot; i++)
	{
		printf("\n========= %d PESSOA2222 =========", i+1);
		printf("\nCodigo:", pe[i].codigo);
		printf("\nNome:", pe[i].nome);
		printf("\nEndereco:", pe[i].endereco);
		printf("\nTelefone:", pe[i].telefone);
		printf("\n");
	}
}
