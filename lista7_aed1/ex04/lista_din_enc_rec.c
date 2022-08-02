#include <stdio.h>
#include <stdlib.h>
#include "lista_din_enc_rec.h"

struct no{
    int info;
    struct no *prox;
};

Lista criar_lista(){
    return NULL;    
}

int lista_vazia(Lista lst){
    if(lst == NULL)
        return 0;
    else 
        return -1;
}

int insere_elem_ord(Lista *lst, int elem){
    Lista N;
    int r;

    if(lista_vazia(*lst) == 0 || elem <= (*lst)->info){
        N = (Lista) malloc (sizeof(struct no));

        if(N == NULL)
            return -1; //falha
               
        N->info = elem;
        N->prox = *lst;
        *lst = N;
        return 0;

    }else{
        r = insere_elem_ord(&(*lst)->prox, elem);
        return r;
    }
}

int remove_elem(Lista *lst, int elem){
    int r;

    if(lista_vazia(*lst) == 0)
        return -1;

    if(elem < (*lst)->info)
        return -2;
    
    Lista aux = *lst;
    if(elem == (*lst)->info){
        *lst = aux->prox;
        free(aux);
        return 0;
    }else{
        r = remove_elem(&(*lst)->prox, elem);
        return r;
    }    
}

int obtem_valor_elem(Lista *lst, int elem){
    int r;

    if(lista_vazia(*lst) == 0)
        return -1; //lista vazia ou elemento não está na lista
    
    if(elem < (*lst)->info)
        return -2;

    if(elem == (*lst)->info){
        return 0; //elemento pertence a lista
    }else{
        r = obtem_valor_elem(&(*lst)->prox, elem);
        return r;
    }

    return -3;
}

int imprime_lista(Lista lst){
       
    while(lista_vazia(lst) != 0){
        printf(((lst)->prox != NULL) ? "%d, " : "%d", (lst)->info);
        lst = (lst)->prox;       
        return imprime_lista(&(*lst));
    }
    return 0;       
}