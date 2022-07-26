#include <stdio.h>
#include <stdlib.h>
#include "din_enc_bebidas.h"

struct no {
    Bebida bebida;
    struct no *prox;        
};

Lista criar_lista(){        
    return NULL;
}

int lista_vazia(Lista *l){
    if((*l) == NULL){
        return 0; //lista está vazia
    } else{
        return -1; //lista não está vazia
    }
}

int insere_elem_inicio(Lista *l, char *nome, int volume, float preco){
    Lista novoNo = (Lista) malloc (sizeof(struct no));
    
    if(novoNo == NULL)
        return -1; //novo nó nao foi criado

    novoNo->info = elem;
    novoNo->prox = *l;

    *l = novoNo;    

    return 0;
}

int remove_elem(Lista *l, int elem){
    if(lista_vazia(l) == 0)
        return -1; //falha pois a lista está vazia

    Lista aux = *l; //ponteiro auxiliar para o primeiro no da lista

    if(elem == (*l)->info){
        *l = aux->prox;
        free(aux);   
        return 0;
    }

    while(aux->prox != NULL && aux->prox->info != elem) //percorre toda a lista até o fim ou até ahar o elem
        aux = aux->prox;

    if(aux->prox == NULL) //elemento não está na lista
        return -2;

    Lista aux2 = aux->prox;
    aux->prox = aux2->prox;
    free(aux2);   

    return 0;
}

int obtem_valor (Lista *l, int elem){
    if(lista_vazia(l) == 0)
        return -1; //falha pois a lista está vazia

    for((*l); (*l) != NULL; (*l) = (*l)->prox){
        if(elem == (*l)->info){
            return elem; //retorna o elemento que eu estou procurando
        }else{
            return -1; // elemento nao esta na lista
        }
    }
}

void imprime_lista(Lista l){
    printf("\nLista: {");
    for(l; l != NULL; l = l->prox){
        printf((l->prox != NULL) ? "%d, " : "%d", l->nome, l->preco, l->volume);
    }
    printf("}\n");
}