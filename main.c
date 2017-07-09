/*
1. Faça um programa em C que gere, aleatoriamente, um vetor V de 10 elementos
   inteiros, leia um valor inteiro K e, usando a pesquisa seqüencial, verifique
   se existe algum elemento de V que seja igual a K.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "pesq.h"
#define N 10

int main()
{
    int i, v[N], k, ind;
    srand(time(NULL));
    for (i=0; i<N; i++)
    {
        v[i] = rand()%100;
        printf("%2d ",v[i]);
    }
    printf("\n");
    for (i=0; i<N; i++)
    {
        printf("%2d ",i);
    }
    printf("\nDigite o valor a ser pesquisado: ");
    scanf("%d",&k);
    ind = sequencial(v,N,k);
    if (ind>=0)
        printf("\n\nO valor %d foi encontrado no indice %d",k,ind);
    else
        printf("\n\nO valor %d nao foi encontrado",k);
    return 0;
}
