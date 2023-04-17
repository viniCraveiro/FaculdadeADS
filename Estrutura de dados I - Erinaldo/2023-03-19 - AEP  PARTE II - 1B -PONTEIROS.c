//Exercicio 01 - Pilha
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int **pilha;

typedef struct no {
  char valor;
  struct no *proximo;
} No;

void imprimir(No *pilha) {
  while (pilha) {
    printf("%c\n", pilha->valor);
    pilha = pilha->proximo;
  }
  printf("\n");
}

No *empilhar(No *pilha, char num) {
  No *novo = malloc(sizeof(No));

  if (novo) {
    novo->valor = num;
    novo->proximo = pilha;
    return novo;
  } else {
    printf("\nErro ao alocar memoria.\n");
  }
  return NULL;
}

No *desempilhar(No **pilha) {
  No *remover = NULL;
  if (*pilha) {
    remover = *pilha;
    *pilha = remover->proximo;
  } else {
    printf("\nPilha vazia.\n");
  }
  return remover;
}


int forma_par(char f, char d){
  switch(f){
    case ')':
    if(d=='('){
      return 1;
       }
      else return 0;
    break;
    case ']':
    if(d == '[') {
      return 1 ;
  
    }else return 0;
    break;
    case '}':
    if(d=='{'){
      return 1 ;
    } else return 0;
    break;
  }
}

int identifica_formacao(char x[]) {
  int i = 0;
  No *remover, *pilha = NULL;

  while (x[i] != '\0') {
    if (x[i] == '[' || x[i] == '(' || x[i] == '{') {
      pilha = empilhar(pilha, x[i]);
      imprimir(pilha);
    } else if (x[i] == ']' || x[i] == ')' || x[i] == '}') {
      remover = desempilhar(&pilha);
      if(remover == NULL){
        printf("\nREMOVER E NULO\n");
      }

      if (forma_par(x[i], remover->valor) == 0) {
        printf("\nExpressao mal formada.\n");
        return 1;
      }
      free(remover);
    }
    i++;
  }
  imprimir(pilha);
  if (pilha) {
    printf("\nExpressao mal formada.\n");
    return 1;
  } else {
    printf("\nExpressao bem formada.\n");
  }
}


int main(void) {
  char exp[100];
  printf("\nDigite uma expressao: ");
  scanf("%99[^\n]",exp);
  printf("\nExpressao: %s\nRetorno: %d\n", exp, identifica_formacao(exp));
  return 0;
}


//Exercicio 02 - Fila
#include <stdio.h>
#include <stdlib.h>

typedef struct no {
  char nome[50];
  int cpf;
  struct no *proximo;
} No;

typedef struct {
  No *prim;
  No *fim;
  int tam;
} Fila;

void criar_fila(Fila *fila) {
  fila->prim = NULL;
  fila->fim = NULL;
  fila->tam = 0;
}

void inserir(Fila *fila, char Nome[50], int Cpf) {
  No *novo = malloc(sizeof(No));
  if (novo) {
    novo->nome[50] = Nome;
    novo->cpf = Cpf;
    novo->proximo = NULL;
    if (fila->prim == NULL) {
      fila->prim = novo;
      fila->fim = novo;
    } else {
      fila->fim->proximo = novo;
      fila->fim = novo;
    }
    fila->tam++;
  } else {
    printf("\nErro ao alocar memoria\n");
  }
}

No *remover(Fila *fila) {
  No *remove = NULL;

  if (fila->prim) {
    remove = fila->prim;
    fila->prim = remove->proximo;
    fila->tam--;
  } else {
    printf("\nFila vazia.\n");
  }
  return remove;
}

void imprimir(Fila *fila) {
  No *aux = fila->prim;
  printf("\n");
  printf("*****************\n");
  while (aux) {
    printf("%d ", aux->nome);
    printf("%d ", aux->cpf);
    printf("\n----------------------\n");
    aux = aux->proximo;
  }
  printf("\n*****************");
  printf("\n");
}

int main(void) {
  No *r;
  Fila fila;
  int opcao, cpf;
  char nome[50];

  criar_fila(&fila);

  do {
    printf("\n--------------------------");
    printf("\n0 - Sair\n1 - Inserir\n2 - Remover\n3 - Imprimir\n");
    printf("--------------------------\n\n");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
      printf("\nDigie seu nome: ");
      scanf("%s", &nome);
      printf("\nDigie seu cpf: ");
      scanf("%d", &cpf);
      inserir(&fila, nome, cpf);
      break;
    case 2:
      r = remover(&fila);
      if (r) {
        printf("Removido: %d\n", r->nome);
        printf("Removido: %d\n", r->cpf);
        free(r);
      }
      break;
    case 3:
      imprimir(&fila);
      break;
    default:
      if (opcao != 0) {
        printf("\nOpção invalida.\n");
      }
    }
  } while (opcao != 0);
  return 0;
}

//Exercicio 03 - Inserção com fila prioritaria.
#include <stdio.h>
#include <stdlib.h>

typedef struct no {
  int valor;
  struct no *proximo;
} No;

void inserir(No **fila, int num) {
  No *aux, *novo = malloc(sizeof(No));
  if (novo) {
    novo->valor = num;
    novo->proximo = NULL;
    if (*fila == NULL) {
      *fila = novo;
    } else {
      aux = *fila;
      while (aux->proximo) {
        aux = aux->proximo;
      }
      aux->proximo = novo;
    }
  } else {
    printf("\nErro ao alocar memória.\n");
  }
}

void inserirp(No **fila, int num) {
  No *aux, *novo = malloc(sizeof(No));
  if (novo) {
    novo->valor = num;
    novo->proximo = NULL;
    if (*fila == NULL) {
      *fila = novo;
    } else {
      if (num > 59) {
        if ((*fila)->valor < 60) {
          novo->proximo = *fila;
          *fila = novo;
        } else {
          aux = *fila;
          while (aux->proximo && aux->proximo->valor > 59) {
            aux = aux->proximo;
          }
          novo->proximo = aux->proximo; // novo->proximo = novo;
          aux->proximo = novo;
        }
      } else {
        aux = *fila;
        while (aux->proximo) {
          aux = aux->proximo;
        }
        aux->proximo = novo;
      }
    }
  } else {
    printf("Fila vazia\n");
  }
}

No *remover(No **fila) {
  No *remove = NULL;
  if (*fila) {
    remove = *fila;
    *fila = remove->proximo;
  } else {
    printf("\nFila vazia.\n");
  }
  return remove;
}

void imprimir(No *fila) {
  while (fila) {
    printf("%d\n", fila->valor);
    fila = fila->proximo;
  }
  printf("\n");
}

int main(void) {
  No *r, *fila = NULL;
  int opcao, valor;

  do {
    printf("\n0 - SAIR\n1 - INSERIR\n2 - REMOVER\n3 - IMPRIMIR\n4 - INSERIR "
           "COM PRIORIDADE\n");
    scanf("%d", &opcao);
    printf("\n======================\n");

    switch (opcao) {
    case 1:
      printf("Digite um valor: ");
      scanf("%d", &valor);
      inserir(&fila, valor);
      break;
    case 2:
      r = remover(&fila);
      if (r) {
        printf("Removido: %d\n", r->valor);
        free(r);
      }
      break;
    case 3:
      imprimir(fila);
      break;
    case 4:
      printf("Digite um valor: ");
      scanf("%d", &valor);
      inserirp(&fila, valor);
      break;
    default:
      if (opcao != 0) {
        printf("\nOpção invalida.\n");
      }
    }

  } while (opcao != 0);

  return 0;
}