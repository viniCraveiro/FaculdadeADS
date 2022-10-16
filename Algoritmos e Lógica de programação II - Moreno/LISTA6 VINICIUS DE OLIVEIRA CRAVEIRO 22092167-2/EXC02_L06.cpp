//2) Construa um algoritmo que solicite 10 nomes e armazene em um vetor. Posteriormente, solicite
//um nome qualquer e verifique se o mesmo se encontra ou não no VETOR, retornando qual a
//posição (localização) do nome procurado no vetor. No fim, apresente a posição encontrada ou a
//frase “nome não localizado”

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define n 10
char nome1[n][50];
int x;
void nome(){
     for (x=0 ; x<n; x++){
         printf("Digite um nome: ");
         gets(nome1[x]);
     }
}
void procura(){
     int y;
     bool V = false;
     char nome2[50];
     printf("\nDigite o nome que deseja procurar: ");
     gets(nome2);
     fflush(stdin);
     for (x=0; x<n; x++){
         y = strcmp(nome2,nome1[x]);
         if (y == 0){
             printf("O nome %s, esta na posicao %i\n", nome1[x],x);
             V = true;
             }
     }
     if(V == false){
             printf("\nO nome nao foi encontrado...\n");
     }
     }     
int main(){
    nome();
    procura();
    system("pause");
    return 0;
}

