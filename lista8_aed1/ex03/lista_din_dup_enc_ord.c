#include <stdio.h>
#include <stdlib.h>
#include "lista_din_dup_enc_ord.h"

struct node{
    int info;
    struct node* next;
    struct node* pre;
};

List create_list(){
    return NULL;
}

int empty_list(List lst){
    if (lst == NULL)
        return 0;   
    else
        return -1;   
}

int insert_elem_ord(List *lst, int elem){
    List N = (List) malloc(sizeof(struct node));    

    if (N == NULL) 
        return -1; 
    
    List anterior = *lst;
    List atual = *lst;
    
    N->info = elem;

    if(empty_list(*lst) == 0){
        N->pre = NULL;
        N->next = NULL;
        *lst = N;
        return 0;
    }else{
        while(atual != NULL && atual->info < elem){
            anterior = atual;
            atual = atual->next;
        }

        if(atual == *lst){ //insere no início
            N->pre = NULL;
            (*lst)->pre = N;
            N->next = (*lst);
            *lst = N;
        }else{
            N->next = anterior->next;
            N->pre = anterior;
            anterior->next = N;
            if(atual != NULL)
                atual->pre = N;
        }
        return 0;
    }
}

void print_list(List lst){   
    List aux = lst;
    while(aux != NULL){
            printf((aux->next != NULL) ? "%d, " : "%d", aux->info);
            aux = aux->next;
        }
}

int remove_elem(List *lst, int elem){
    if(empty_list(*lst) == 0)
        return -1; //falha pois a lista está vazia

    List aux = *lst;

    while(aux->next != NULL && aux->info < elem){
        aux = aux->next;
    }

    if(aux->next == NULL && aux->info != elem)
        return -2; //elemento não existe na lista

    if(aux->pre == NULL)
        *lst = aux->next; //remove no início
    else    //remove no meio
        aux->pre->next = aux->next; 

    if(aux->next != NULL) //remove no final
        aux->next->pre = aux->pre;
    
    free(aux);

    return 0;
}

int obtem_valor_elem(List lst, int elem){
     if(empty_list(lst) == 0)
        return -1;

    do{
        if(lst->info == elem)
            return 0;
        lst = lst->next;
    }while(lst != NULL);

    return -2;
}