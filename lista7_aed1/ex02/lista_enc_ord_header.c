#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista_enc_ord_header.h"

struct no{
    int info;
    struct no *prox;
};

int criar_lista(Lista *lst){
    Lista head;
    head = (Lista) malloc (sizeof(struct no));
    
    if(head == NULL)
        return -1;

    head->info = 0;
    head->prox = NULL;
    *lst = head;

    return 0;    
}

int lista_vazia(Lista lst){
    if(lst->prox == NULL)
        return 0;
    else 
        return -1;
}

int insere_elem_ord(Lista lst, int elem){
    Lista N;
    N = (Lista) malloc (sizeof(struct no));

    if(N == NULL)
        return -1; //falha
    
    Lista aux = lst;

    while(aux->prox != NULL && aux->prox->info < elem)
        aux = aux->prox;

    N->prox = aux->prox;
    aux->prox = N;
    lst->info++;

    return 0; //sucesso
}

int remove_elem(Lista lst, int elem){
    
    if(lista_vazia(lst) == 0)
        return -1; //falha lista está vazia

    Lista aux = lst;

    while(aux->prox != NULL && aux->prox->info < elem)
        aux = aux->prox;

    if(aux->prox == NULL || aux->prox->info > elem)
        return -2; //falha, elemento não existe na lista

    Lista aux2 = aux->prox;
    aux->prox = aux2->prox;
    free(aux2);
    lst->info--;

    return 0;
}

int obtem_valor_elem(Lista lst, int elem){
    if(lista_vazia(lst) == 0)
        return -1; //lista vazia

    Lista aux = lst->prox;

    for(aux; aux != NULL; aux = aux->prox){
        if(aux->info == elem)
            return elem;       
    } 

    return -2; //elemento nao existe na lista
}

void imprime_lista(Lista lst){
    Lista aux = lst->prox;

    printf("Lista: {");
    for(aux; aux != NULL; aux = aux->prox){
        printf((aux->prox != NULL) ? "%d, " : "%d", aux->info);
    }
    printf("}");
}