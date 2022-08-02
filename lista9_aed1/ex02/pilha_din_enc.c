#include <stdio.h>
#include <stdlib.h>
#include "pilha_din_enc.h"

struct no{
    int info;
    struct no* prox;
};

Pilha cria_pilha(){
    return NULL;
}

int pilha_vazia(Pilha p){
    if(p == NULL)
        return 0;
    else
        return -1;
}

int push(Pilha *p, int elem){
    Pilha N;
    N = (Pilha) malloc (sizeof (struct no));

    if(N == NULL)
        return -1;

    N->info = elem;
    N->prox = *p;
    *p = N;

    return 0;
}

int pop(Pilha *p, int *elem){
    if(pilha_vazia(*p) == 0)
        return -1;

    Pilha aux = *p;
    *elem = aux->info;
    *p = aux->prox;
    free(aux);

    return 0;
}

int le_topo(Pilha p, int *elem){
    if(pilha_vazia(p) == 0)
        return -1;

    *elem = p->info;

    return 0;
}

void imprime_pilha(Pilha p){
    
    for(p; p != NULL; p = p->prox){
        printf((p->prox != NULL)? "%d, " : "%d", p->info);
    }
    
}
