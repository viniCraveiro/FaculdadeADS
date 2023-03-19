//EXERCICIO 1 - Ponteiros com variáveis em funções ou procedimentos.
#include <stdio.h>

int soma(int *x, int *y);

int main(void) {
  printf("Hello World\n");

  int a = 10;
  int b = 5;
  
  


  printf("\n\n%d, %d", &a, &b);

  printf("\n\nSOMA: %d", soma(&a,&b));

  return 0;

}

  int soma(int *x, int *y){
  printf("\n\n%d, %d", x,y );

  printf("\n\n%d,%d", &x,&y);

  printf("\n\n%d, %d", *x,*y);


    return *x+*y;
  }

//EXERCICIO 2 - Alocação dinâmica de memória utilizando vetor ou matriz, com aritmética de ponteiros.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprimir(int *vet){
  int tam = sizeof(*vet)/sizeof(int);
   for(int i=0; i<tam; i++){
      printf("Conteudo guardado no VET: %d\n",*(vet+i));
      printf("Endereço de memoria armazenado o VET: %d\n", &vet+i);
      printf("Endereço de VET: %p\n\n\n",vet+i);
    }
}

int main(void) {
  int *x;
  x = (int) malloc(sizeof(int));

  if(x){
    printf("Memoria alocada com sucesso.\n");
    printf("Conteudo guardado da linha 14 de x: %d\n",*x);
    printf("Endereço guardado da linha 7 de x: %d\n", x);
    printf("Endereço de x: %p\n\n", &x);
    *x=50;
    printf("Conteudo guardado da linha 14 de x: %d\n",*x);
    printf("Endereço da memoria armazenado da linha 7 de x: %d\n", x);
    printf("Endereço de x: %p\n", &x);
  }else{
    printf("Erro ao alocar memoria.\n");
  }

  //--------------------------------
  printf("\n===============================\n");
  int i, tam, *vet;

  printf("Informe o tamanho do vetor: ");
  scanf("%d", &tam);
  srand(time(NULL));

  vet = malloc(tam*sizeof(int));
  if(vet){
    printf("Memoria alocada com sucesso.\n\n");
    for(i=0; i<tam; i++){
      *(vet+i) = rand() % 100;
    imprimir(vet+i);
    }


    printf("\n");
  }
  

  return 0;
}

//EXERCICIO 03 - Estrutura de dados do tipo Pilha para inserir, remover e imprimir dados.

#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int dia, mes, ano;
} Data;

typedef struct {
  char nome[30];
  Data nasc;
} Pessoa;

typedef struct no {
  Pessoa p;
  struct no *prox;
} No;


Pessoa ler_pessoa() {
  Pessoa p;
  printf("\nNome: ");
  scanf("%29[^\n]", p.nome);
  printf("\nData de nascimento DD MM YYYY: ");
  scanf("%d%d%d", &p.nasc.dia, &p.nasc.mes, &p.nasc.ano);
  return p;
}

void imprimir(Pessoa p) {
  printf("\nNome: %s\nData: %2d/%2d/%4d", p.nome, p.nasc.dia, p.nasc.mes,
         p.nasc.ano);
}

No *push(No *topo) {
  No *novo = malloc(sizeof(No));

  if (novo) {
    novo->p = ler_pessoa();
    novo->prox = topo;
    return novo;
  } else {
    printf("\nNão possui espaço suficiente.");
  }
  return NULL;
};

void imprimir_pilha(No *topo) {
  while (topo != NULL) {
    imprimir(topo->p);
    topo = topo->prox;
  }
}

No *desempilhar(No **topo) { 
  if (*topo != NULL) {
    No *remover = *topo;   
    *topo = remover->prox; 
    return remover;
  } else {
    printf("\nPilha vazia.\n");
    return NULL;
  }
}

int main(void) {
  No *remover;
  No *topo = NULL;
  int opcao;

  do {
    printf("\n0 - SAIR \n1 - EMPILHAR \n2 - DESEMPILHAR\n3 - IMPRIMIR\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao);
    getchar();

    switch (opcao) {
    case 1:
      topo = push(topo);
      break;

    case 2:
      remover = desempilhar(&topo);
      if (remover) {
        printf("\nElemento removido.\n");
        imprimir(remover->p);
        free(remover);
      } else {
        printf("\nElemento não existe.\n");
      }
      break;

    case 3:
      imprimir_pilha(topo);
      break;

    default:
      if (opcao != 0) {
        printf("\n Opção invalida. \n");
      }
    }
  } while (opcao != 0);

  return 0;
}