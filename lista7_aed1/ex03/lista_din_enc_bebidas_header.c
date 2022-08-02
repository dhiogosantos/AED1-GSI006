#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista_din_enc_bebidas_header.h"

struct no{
    char nome[20];
    int volume;
    float preco;
    struct no *prox;
};

int criar_lista(Lista *lst){
    Lista head;
    head = (Lista) malloc (sizeof(struct no));
    
    if(head == NULL)
        return -1;

    head->volume = 0;
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

int insere_elem(Lista lst, char *nome, int volume, float preco){
    Lista N;
    N = (Lista) malloc (sizeof(struct no));

    if(N == NULL)
        return -1; //falha

    strcpy(N->nome, nome);
    N->volume = volume;
    N->preco = preco;

    N->prox = lst->prox;
    lst->prox = N;
    lst->volume++;

    return 0; //sucesso
}

int remove_elem(Lista lst, char *nome){
    
    if(lista_vazia(lst) == 0)
        return -1; //falha, lista está vazia

    Lista aux = lst;

    while(aux->prox != NULL && strcmp(aux->prox->nome, nome) < 0)
        aux = aux->prox;

    if(aux->prox == NULL)
        return -2; //falha, elemento não existe na lista

    Lista aux2 = aux->prox;
    aux->prox = aux2->prox;
    free(aux2);
    lst->volume--;

    return 0;
}

int obtem_valor_elem(Lista lst, char *nome){
    if(lista_vazia(lst) == 0)
        return -1; //lista vazia

    Lista aux = lst->prox;

    for(aux; aux != NULL; aux = aux->prox){
        if(strcmp(aux->nome, nome) == 0)
            return 0;       
    } 

    return -2;
}

void imprime_lista(Lista lst){
    Lista aux = lst->prox;
    
    for(aux; aux != NULL; aux = aux->prox){
        printf((aux->prox != NULL) ? "Nome: %sVolume: %d ml\nPreco: R$ %.2f\n\n" : "\nNome: %sVolume: %d ml\nPreco: R$ %.2f\n", aux->nome, aux->volume, aux->preco);
    }    
}


