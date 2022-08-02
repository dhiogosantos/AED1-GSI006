#include <stdio.h>
#include <stdlib.h>
#include "pilha_est_seq.h"

#define max 20

struct pilha{
    int vet[max];
    int topo;
};

Pilha cria_pilha(){
    Pilha p;
    p = (Pilha) malloc (sizeof (struct pilha));

    if(p != NULL)
        p->topo = -1;
    
    return p;
}

int pilha_vazia(Pilha p){
    if(p->topo == -1)
        return 0;
    else 
        return -1;
}

int pilha_cheia(Pilha p){
    if(p->topo == max - 1)
        return 0;
    else
        return -1;
}

int push(Pilha p, int elem){
    if(p == NULL || pilha_cheia(p) == 0)
        return -1;

    p->topo++;
    p->vet[p->topo] = elem;
    return 0;
}

int pop(Pilha p, int *elem){
    if(p == NULL || pilha_vazia(p) == 0)
        return -1;

    *elem = p->vet[p->topo];
    p->topo--;
    return 0;
}

int le_topo(Pilha p, int *elem){
    if(p == NULL || pilha_vazia(p) == 0)
        return -1;

    *elem = p->vet[p->topo];
    return 0;
}

int imprime_pilha(Pilha p){
    if(p == NULL || pilha_vazia(p) == 0)
        return -1;

    int j = p->topo;

    for(int i = p->topo; i >= 0; i --){
        printf("Pilha[%d] = %d\n", j, p->vet[i]);
        j--;
    }
    return 0;
}