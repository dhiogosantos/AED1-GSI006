#include <stdio.h>
#include <stdlib.h>
#include "fila_est_seq_contador.h"

#define max 20

struct fila{
    int vet[max];
    int ini, cont;
};

Fila cria_fila(){
    Fila f;
    f = (Fila) malloc (sizeof (struct fila));

    if(f != NULL){
        f->ini = 0;
        f->cont = 0;
    }

    return f;
}

int fila_vazia(Fila f){
    if(f->cont == 0)
        return 0;
    else
        return -1;
}

int fila_cheia(Fila f){
    if(f->cont == max)
        return 0;
    else
        return -1;
}

int insere_fim(Fila f, int elem){
    if(fila_cheia(f) == 0 || f == NULL)
        return -1;

    f->vet[(f->ini + f->cont) % max] = elem;
    f->cont++;
    
    return 0;
}

int remove_ini(Fila f, int *elem){
    if(fila_vazia(f) == 0 || f == NULL)
        return -1;

    *elem = f->vet[f->ini];
    f->ini = (f->ini + 1) % max;
    f->cont--;

    return 0;
}

int ler_final(Fila f, int *elem){
    if(fila_vazia(f) == 0 || f == NULL)
        return -1;

    *elem = f->vet[(f->ini + f->cont) % max - 1];

    return 0;
}

int imprime_fila(Fila f){
    int j = 0;

    if(f == NULL)
        return -1;

    if(fila_vazia(f) == 0){
        return 1;
    }

    for(int i = f->ini; i < (f->ini + f->cont) % max; i++){
        printf("Fila[%d] = %d\n", j, f->vet[i]);
        j++;  
    }
    return 0;
}



